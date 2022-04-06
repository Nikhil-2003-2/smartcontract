pragma solidity >=0.6.0 <0.9.0;  //Solidity version

contract SimpleStorage {

    uint256 favoriteNumber ;   //initialised to zero
    // bool favouriteBool= true;
    // string favouriteString ="String";
    // int256 favouriteInt=-5;
    // address favouriteAddress =  0xb794f5ea0ba39494ce839613fffba74279579268;
    // bytes32 favouritebyte ="cat";

     struct People {
        uint256 favoriteNumber;
        string name;
    }

     People[] public people;  //people array
     mapping(string => uint256) public nameToFavoriteNumber;


    function addPerson(string memory _name, uint256 _favoriteNumber) public {
        people.push(People(_favoriteNumber, _name));
        nameToFavoriteNumber[_name] = _favoriteNumber;
    }

    function store(uint256 _favouriteNumber) public {
        favoriteNumber = _favouriteNumber;
    }

    function retrieve() public view returns(uint256)
    {
        return favoriteNumber;
    }
    // pure func vs view funct

}
