// SPDX-License-Identifier: MIT     

pragma solidity ^0.6.0;   //version of solidity being used

import "./simplestorage.sol";    //importing simple storge contract 

contract StorageFactory {

    SimpleStorage[] public SimpleStorageArray;
    function createSimpleStorageContract() public
    {
        SimpleStorage simplestorage = new SimpleStorage();
        SimpleStorageArray.push(simplestorage);
    }

    function sfstore(uint256 _simplestorageindex,uint256 _simplestoragenumber) public{
      //  SimpleStorage(address(SimpleStorageArray[_simplestorageindex])); returns the contract you wanna interact with
        SimpleStorage simplestorage =SimpleStorage(address(SimpleStorageArray[_simplestorageindex]));
        simplestorage.store(_simplestoragenumber);
    }

     function sfGet(uint256 _simpleStorageIndex) public view returns (uint256) {
        SimpleStorage simplestorage =SimpleStorage(address(SimpleStorageArray[_simpleStorageIndex]));
        return simplestorage.retrieve();
        }
       
       
       // return SimpleStorage(address(simpleStorageArray[_simpleStorageIndex])).retrieve(); 
} 