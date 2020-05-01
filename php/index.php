<?php 
function solution($ranks) {
	$haveReport = false;
	$result = 0;
	$c = count($ranks);
	sort($ranks);
	for($i = 0; $i < $c; $i++){
		for($j = $i; $j < $c; $j++){
			$com = $ranks[$i]+1;
			if($ranks[$j] == $com && $haveReport == false){
				$result+=1;	
				$haveReport = true;
			}
		}
		$haveReport = false;
	}
    return $result;
}

$ranks = array(3,3,4,4,5,2,0);
echo ("Result : " . solution($ranks));

 ?>