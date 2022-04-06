pragma solidity >=0.6.0 <0.9.0;  //Solidity version

contract SimpleStorage {

    uint256 favoriteNumber ;   //initialised to zero
    // bool favouriteBool= true;
    // string favouriteString ="String";
    // int256 favouriteInt=-5;
    // address favouriteAddress =  0xb794f5ea0ba39494ce839613fffba74279579268;
    // bytes32 favouritebyte ="cat";

    function store(uint256 _favouriteNumber) public {
        favoriteNumber = _favouriteNumber;
    }

    function retrieve() public view returns(uint256)
    {
        return favoriteNumber;
    }
    // pure func vs view funct

}