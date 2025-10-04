<!DOCTYPE html>
<html lang="en">
<head>
	<meta charset="UTF-8">
	<meta name="viewport" content="width=device-width, initial-scale=1.0">
	<title>Ludo</title>
	<style>
		* {
			margin: 0;
			padding: 0;
		}
		.outer {
			width: 95vw;
			height: 95vw;
			max-width: 750px;
			max-height: 750px;
			margin: 0 auto;
			border: 1px solid red;
		}
		.box_row {
			height: 40%;
			width: 100%;
		}
		.box {
			height: 80%;
			width: 26.6%;
			float: left;
		}
		.v_lad {
			height: 100%;
			width: 20%;
			float: left;
		}
		.circle {
			height: 20%;
			width: 20%;
			margin: 10%;
			border-radius: 50%;
			box-sizing: border-box;
			float: left;
		}
		.border_red   { border: 5px solid red; }
		.border_green { border: 5px solid green; }
		.border_blue  { border: 5px solid blue; }
		.border_yellow{ border: 5px solid yellow; }

		.v_lad_row {
			height: 16.6%;
			width: 100%;
		}
		.v_lad_cell {
			height: 100%;
			width: 33.3%;
			border: 1px solid #000;
			box-sizing: border-box;
			float: left;
			display: flex;
			align-items: center;
			justify-content: center;
		}

		.red    { background: red; }
		.green  { background: green; }
		.blue   { background: blue; }
		.yellow { background: yellow; }

		.middle_row {
			height: 20%;
			width: 100%;
		}
		.h_lad {
			height: 100%;
			width: 40%;
			float: left;
		}
		.h_lad_row {
			height: 33.3%;
			width: 100%;
			float: left;
		}
		.h_lad_cell {
			height: 100%;
			width: 16.6%;
			border: 1px solid #000;
			float: left;
			box-sizing: border-box;
			display: flex;
			align-items: center;
			justify-content: center;
		}

		.ludo_home {
			width: 0;
			height: 0;
			border-left: 75px solid red;
			border-top: 75px solid green;
			border-right: 75px solid yellow;
			border-bottom: 75px solid blue;
			float: left;
		}

		.star {
			font-size: 28px;
		}

		/* Hover effect (optional) */
		.v_lad_cell:hover, .h_lad_cell:hover {
			background: #ddd;
			cursor: pointer;
		}
	</style>
</head>
<body>
	<div class="outer">
		<!-- Top row -->
		<div class="box_row">
			<div class="box" style="border:50px solid red;">
				<div class="circle border_red"></div>
				<div class="circle border_red"></div>
				<div class="circle border_red"></div>
				<div class="circle border_red"></div>
			</div>
			<div class="v_lad">
				<div class="v_lad_row">
					<div class="v_lad_cell"></div>
					<div class="v_lad_cell"></div>
					<div class="v_lad_cell"></div>
				</div>
				<div class="v_lad_row">
					<div class="v_lad_cell"></div>
					<div class="v_lad_cell green"></div>
					<div class="v_lad_cell green"><span class="star">&#9733;</span></div>
				</div>
				<div class="v_lad_row">
					<div class="v_lad_cell green"><span class="star">&#9733;</span></div>
					<div class="v_lad_cell green"></div>
					<div class="v_lad_cell"></div>
				</div>
				<div class="v_lad_row">
					<div class="v_lad_cell"></div>
					<div class="v_lad_cell green"></div>
					<div class="v_lad_cell"></div>
				</div>
				<div class="v_lad_row">
					<div class="v_lad_cell"></div>
					<div class="v_lad_cell green"></div>
					<div class="v_lad_cell"></div>
				</div>
				<div class="v_lad_row">
					<div class="v_lad_cell"></div>
					<div class="v_lad_cell green"></div>
					<div class="v_lad_cell"></div>
				</div>
			</div>
			<div class="box" style="border:50px solid green;">
				<div class="circle border_green"></div>
				<div class="circle border_green"></div>
				<div class="circle border_green"></div>
				<div class="circle border_green"></div>
			</div>
		</div>

		<!-- Middle row -->
		<div class="middle_row">
			<div class="h_lad">
				<div class="h_lad_row">
					<div class="h_lad_cell"></div>
					<div class="h_lad_cell red"><span class="star">&#9733;</span></div>
					<div class="h_lad_cell"></div>
					<div class="h_lad_cell"></div>
					<div class="h_lad_cell"></div>
					<div class="h_lad_cell"></div>
				</div>
				<div class="h_lad_row">
					<div class="h_lad_cell"></div>
					<div class="h_lad_cell red"></div>
					<div class="h_lad_cell red"></div>
					<div class="h_lad_cell red"></div>
					<div class="h_lad_cell red"></div>
					<div class="h_lad_cell red"></div>
				</div>
				<div class="h_lad_row">
					<div class="h_lad_cell"></div>
					<div class="h_lad_cell"></div>
					<div class="h_lad_cell red"><span class="star">&#9733;</span></div>
					<div class="h_lad_cell"></div>
					<div class="h_lad_cell"></div>
					<div class="h_lad_cell"></div>
				</div>
			</div>
			<div class="ludo_home"></div>
			<div class="h_lad">
				<div class="h_lad_row">
					<div class="h_lad_cell"></div>
					<div class="h_lad_cell"></div>
					<div class="h_lad_cell"></div>
					<div class="h_lad_cell yellow"><span class="star">&#9733;</span></div>
					<div class="h_lad_cell"></div>
					<div class="h_lad_cell"></div>
				</div>
				<div class="h_lad_row">
					<div class="h_lad_cell yellow"></div>
					<div class="h_lad_cell yellow"></div>
					<div class="h_lad_cell yellow"></div>
					<div class="h_lad_cell yellow"></div>
					<div class="h_lad_cell yellow"></div>
					<div class="h_lad_cell"></div>
				</div>
				<div class="h_lad_row">
					<div class="h_lad_cell"></div>
					<div class="h_lad_cell"></div>
					<div class="h_lad_cell"></div>
					<div class="h_lad_cell"></div>
					<div class="h_lad_cell yellow"><span class="star">&#9733;</span></div>
					<div class="h_lad_cell"></div>
				</div>
			</div>
		</div>

		<!-- Bottom row -->
		<div class="box_row">
			<div class="box" style="border:50px solid blue;">
				<div class="circle border_blue"></div>
				<div class="circle border_blue"></div>
				<div class="circle border_blue"></div>
				<div class="circle border_blue"></div>
			</div>
			<div class="v_lad">
				<div class="v_lad_row">
					<div class="v_lad_cell"></div>
					<div class="v_lad_cell blue"></div>
					<div class="v_lad_cell"></div>
				</div>
				<div class="v_lad_row">
					<div class="v_lad_cell"></div>
					<div class="v_lad_cell blue"></div>
					<div class="v_lad_cell"></div>
				</div>
				<div class="v_lad_row">
					<div class="v_lad_cell"></div>
					<div class="v_lad_cell blue"></div>
					<div class="v_lad_cell"></div>
				</div>
				<div class="v_lad_row">
					<div class="v_lad_cell"></div>
					<div class="v_lad_cell blue"></div>
					<div class="v_lad_cell blue"><span class="star">&#9733;</span></div>
				</div>
				<div class="v_lad_row">
					<div class="v_lad_cell blue"><span class="star">&#9733;</span></div>
					<div class="v_lad_cell blue"></div>
					<div class="v_lad_cell"></div>
				</div>
				<div class="v_lad_row">
					<div class="v_lad_cell"></div>
					<div class="v_lad_cell"></div>
					<div class="v_lad_cell"></div>
				</div>
			</div>
			<div class="box" style="border:50px solid yellow;">
				<div class="circle border_yellow"></div>
				<div class="circle border_yellow"></div>
				<div class="circle border_yellow"></div>
				<div class="circle border_yellow"></div>
			</div>
		</div>
	</div>
</body>
</html>

