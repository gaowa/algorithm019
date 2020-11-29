	void searchRoom(int depth){
		enterRoom(2);
		if(hasJewelInRoom()){// false
			takeJewel();
		}else{
			//searchRoom(2 + 1);
			enterRoom(3);
			if(hasJewelInRoom()){// fasle
				takeJewel();			
			}else{
				//searchRoom(3 + 1);
				enterRoom(4);
				if(hasJewelInRoom()) {// true
					//找到宝石了，原路退出 
				}
				exitRoom(4); 
			}
			exitRoom(3); 
		}
		exitRoon(2);
	} 



