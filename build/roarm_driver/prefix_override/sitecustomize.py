import sys
if sys.prefix == '/usr':
    sys.real_prefix = sys.prefix
    sys.prefix = sys.exec_prefix = '/home/nameless/Desktop/RoARM_Jazzy_ws/src/roarm_ws_em0_jazzy/install/roarm_driver'
