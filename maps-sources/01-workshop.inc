/*
 * Maps Collection - Maps for SA-MP (San Andreas Multiplayer)
 * Copyright (c) SA-MP Programming Community
 *
 * Licensed under the MIT License (https://opensource.org/licenses/MIT)
 * Permission is hereby granted, free of charge, to any person obtaining a copy
 * of this software and associated documentation files (the "Software"), to deal
 * in the Software without restriction, including without limitation the rights
 * to use, copy, modify, merge, publish, distribute, sublicense, and/or sell
 * copies of the Software, and to permit persons to whom the Software is
 * furnished to do so, subject to the following conditions:
 *
 * The above copyright notice and this permission notice shall be included in all
 * copies or substantial portions of the Software.
 *
 * THE SOFTWARE IS PROVIDED "AS IS", WITHOUT WARRANTY OF ANY KIND, EXPRESS OR
 * IMPLIED, INCLUDING BUT NOT LIMITED TO THE WARRANTIES OF MERCHANTABILITY,
 * FITNESS FOR A PARTICULAR PURPOSE AND NONINFRINGEMENT. IN NO EVENT SHALL THE
 * AUTHORS OR COPYRIGHT HOLDERS BE LIABLE FOR ANY CLAIM, DAMAGES OR OTHER
 * LIABILITY, WHETHER IN AN ACTION OF CONTRACT, TORT OR OTHERWISE, ARISING FROM,
 * OUT OF OR IN CONNECTION WITH THE SOFTWARE OR THE USE OR OTHER DEALINGS IN THE
 * SOFTWARE.
*/

#if defined maps_collection_01
    #undef maps_collection_01
#endif

#if defined maps_collection_01_included
    #endinput
#endif
#define maps_collection_01_included

#if !defined _INC_open_mp
    #if !defined _samp_included
        #error "The "a_samp" ("or open.mp") library has not been activated. Please activate it at the beginning of your Gamemode, Ex: "#include <a_samp>" ("or <open.mp>")"
    #endif
#endif

// Change if necessary
#define 01_MAP_NAME_01 "Auto"
#define 01_MAP_NAME_02 "Oficina"

public OnPlayerConnect(playerid)
{
    RemoveBuildingForPlayer(playerid, 673, 2495.270, -1538.010, 22.867, 0.250);
    
    #if defined MCI_01_OnPlayerConnect
        return MCI_01_OnPlayerConnect(playerid);
    #else
        return true;
    #endif
}

public OnGameModeInit()
{
    print(" ");
    print("__________________________________________________________________");
    print("||==============================================================||");
    print("||                                                              ||");
    print("||                        Maps Collection                       ||");
    print("||                                                              ||");
    print("|| Mapper: Max Alexander                                        ||");
    print("|| Instagram: maxxfz_                                           ||");
    print("|| Discord: maxalexander422                                     ||");
    print("||                                                              ||");
    print("|| [Info]: Workshop mapping                                     ||");
    print("||                                                              ||");
    print("||==============================================================||");
    print("__________________________________________________________________");
    print(" ");

    new mci_01_variable;

    #if !defined _streamer_included
        mci_01_variable = CreateObject(19377, 2502.562011, -1519.094848, 23.680757, -8.999997, 90.000000, 0.000000, 300.00); 
        SetObjectMaterial(mci_01_variable, 0, 9514, "711_sfw", "ws_carpark2", 0x00000000);
        mci_01_variable = CreateObject(19377, 2512.953857, -1519.094848, 23.680757, -8.999997, 90.000000, 0.000000, 300.00); 
        SetObjectMaterial(mci_01_variable, 0, 9514, "711_sfw", "ws_carpark2", 0x00000000);
        mci_01_variable = CreateObject(19377, 2502.562500, -1528.666259, 24.436058, 0.000000, 90.000000, 0.000000, 300.00); 
        SetObjectMaterial(mci_01_variable, 0, 9514, "711_sfw", "ws_carpark2", 0x00000000);
        mci_01_variable = CreateObject(19454, 2509.561279, -1528.646972, 24.431993, 0.000000, 90.000000, 0.000000, 300.00); 
        SetObjectMaterial(mci_01_variable, 0, 9514, "711_sfw", "ws_carpark2", 0x00000000);
        mci_01_variable = CreateObject(19377, 2512.963623, -1538.277343, 24.436058, 0.000000, 90.000000, 0.000000, 300.00); 
        SetObjectMaterial(mci_01_variable, 0, 9514, "711_sfw", "ws_carpark2", 0x00000000);
        mci_01_variable = CreateObject(19377, 2502.539794, -1538.277343, 24.436058, 0.000000, 90.000000, 0.000000, 300.00); 
        SetObjectMaterial(mci_01_variable, 0, 9514, "711_sfw", "ws_carpark2", 0x00000000);
        mci_01_variable = CreateObject(19377, 2518.316406, -1519.159179, 19.949995, 0.000000, 0.000000, 0.000000, 300.00); 
        SetObjectMaterial(mci_01_variable, 0, 10765, "airportgnd_sfse", "white", 0x00000000);
        mci_01_variable = CreateObject(19377, 2518.316406, -1528.788208, 19.259988, 0.000000, 0.000000, 0.000000, 300.00); 
        SetObjectMaterial(mci_01_variable, 0, 10765, "airportgnd_sfse", "white", 0x00000000);
        mci_01_variable = CreateObject(19377, 2518.316406, -1538.270019, 19.259988, 0.000000, 0.000000, 0.000000, 300.00); 
        SetObjectMaterial(mci_01_variable, 0, 10765, "airportgnd_sfse", "white", 0x00000000);
        mci_01_variable = CreateObject(19377, 2513.508056, -1543.170043, 19.259988, 0.000000, 0.000000, 90.000000, 300.00); 
        SetObjectMaterial(mci_01_variable, 0, 10765, "airportgnd_sfse", "white", 0x00000000);
        mci_01_variable = CreateObject(19377, 2503.925781, -1543.170043, 19.259988, 0.000000, 0.000000, 90.000000, 300.00); 
        SetObjectMaterial(mci_01_variable, 0, 10765, "airportgnd_sfse", "white", 0x00000000);
        mci_01_variable = CreateObject(19355, 2497.792480, -1543.178588, 22.768060, 0.000000, 0.000000, 90.000000, 300.00); 
        SetObjectMaterial(mci_01_variable, 0, 10765, "airportgnd_sfse", "white", 0x00000000);
        mci_01_variable = CreateObject(19377, 2518.308105, -1529.008666, 23.315097, 0.000000, 0.000000, 180.000000, 300.00); 
        SetObjectMaterial(mci_01_variable, 0, 10444, "hotelbackpool_sfs", "ws_hotel7", 0x00000000);
        mci_01_variable = CreateObject(19449, 2513.578369, -1524.087402, 30.270154, 0.000000, 0.000000, 90.000000, 300.00); 
        SetObjectMaterial(mci_01_variable, 0, 13059, "ce_fact03", "GB_truckdepot19", 0x00000000);
        mci_01_variable = CreateObject(19377, 2518.308105, -1538.439575, 23.315097, 0.000000, 0.000000, 360.000000, 300.00); 
        SetObjectMaterial(mci_01_variable, 0, 10444, "hotelbackpool_sfs", "ws_hotel7", 0x00000000);
        mci_01_variable = CreateObject(19377, 2513.588867, -1543.162475, 23.315097, 0.000000, 0.000000, 450.000000, 300.00); 
        SetObjectMaterial(mci_01_variable, 0, 10444, "hotelbackpool_sfs", "ws_hotel7", 0x00000000);
        mci_01_variable = CreateObject(19377, 2503.976562, -1543.162475, 23.315097, 0.000000, 0.000000, 450.000000, 300.00); 
        SetObjectMaterial(mci_01_variable, 0, 10444, "hotelbackpool_sfs", "ws_hotel7", 0x00000000);
        mci_01_variable = CreateObject(19355, 2498.922851, -1543.168579, 26.118074, 0.000000, 0.000000, 90.000000, 300.00); 
        SetObjectMaterial(mci_01_variable, 0, 10444, "hotelbackpool_sfs", "ws_hotel7", 0x00000000);
        mci_01_variable = CreateObject(19377, 2497.426757, -1529.008666, 23.315097, 0.000000, 0.000000, 180.000000, 300.00); 
        SetObjectMaterial(mci_01_variable, 0, 10444, "hotelbackpool_sfs", "ws_hotel7", 0x00000000);
        mci_01_variable = CreateObject(19377, 2497.426757, -1538.339843, 23.315097, 0.000000, 0.000000, 180.000000, 300.00); 
        SetObjectMaterial(mci_01_variable, 0, 10444, "hotelbackpool_sfs", "ws_hotel7", 0x00000000);
        mci_01_variable = CreateObject(19355, 2498.922851, -1543.168579, 26.808078, 0.000000, 0.000000, 90.000000, 300.00); 
        SetObjectMaterial(mci_01_variable, 0, 10444, "hotelbackpool_sfs", "ws_hotel7", 0x00000000);
        mci_01_variable = CreateObject(19449, 2518.308593, -1528.847900, 30.270154, 0.000000, 0.000000, 180.000000, 300.00); 
        SetObjectMaterial(mci_01_variable, 0, 13059, "ce_fact03", "GB_truckdepot19", 0x00000000);
        mci_01_variable = CreateObject(19449, 2518.308593, -1538.419799, 30.270154, 0.000000, 0.000000, 180.000000, 300.00); 
        SetObjectMaterial(mci_01_variable, 0, 13059, "ce_fact03", "GB_truckdepot19", 0x00000000);
        mci_01_variable = CreateObject(19355, 2498.922851, -1543.178588, 30.268075, 0.000000, 0.000000, 90.000000, 300.00); 
        SetObjectMaterial(mci_01_variable, 0, 13059, "ce_fact03", "GB_truckdepot19", 0x00000000);
        mci_01_variable = CreateObject(19449, 2513.575439, -1543.170288, 30.270154, 0.000000, 0.000000, 270.000000, 300.00); 
        SetObjectMaterial(mci_01_variable, 0, 13059, "ce_fact03", "GB_truckdepot19", 0x00000000);
        mci_01_variable = CreateObject(19449, 2504.043457, -1543.170288, 30.270154, 0.000000, 0.000000, 270.000000, 300.00); 
        SetObjectMaterial(mci_01_variable, 0, 13059, "ce_fact03", "GB_truckdepot19", 0x00000000);
        mci_01_variable = CreateObject(19449, 2497.423095, -1538.279418, 30.270154, 0.000000, 0.000000, 360.000000, 300.00); 
        SetObjectMaterial(mci_01_variable, 0, 13059, "ce_fact03", "GB_truckdepot19", 0x00000000);
        mci_01_variable = CreateObject(19449, 2497.423095, -1529.018920, 30.270154, 0.000000, 0.000000, 360.000000, 300.00); 
        SetObjectMaterial(mci_01_variable, 0, 13059, "ce_fact03", "GB_truckdepot19", 0x00000000);
        mci_01_variable = CreateObject(19449, 2502.145751, -1524.147460, 30.280172, 0.000000, 0.000000, 90.000000, 300.00); 
        SetObjectMaterial(mci_01_variable, 0, 13059, "ce_fact03", "GB_truckdepot19", 0x00000000);
        mci_01_variable = CreateObject(19377, 2512.963623, -1538.277343, 31.936132, 0.000000, 90.000000, 0.000000, 300.00); 
        SetObjectMaterial(mci_01_variable, 0, 9920, "anotherbuildsfe", "gz_vic2d", 0x00000000);
        mci_01_variable = CreateObject(19377, 2513.586181, -1524.087646, 23.315097, 0.000000, 0.000000, 90.000000, 300.00); 
        SetObjectMaterial(mci_01_variable, 0, 10444, "hotelbackpool_sfs", "ws_hotel7", 0x00000000);
        mci_01_variable = CreateObject(18980, 2508.270019, -1524.066772, 19.544946, 0.000000, 0.000000, 0.000000, 300.00); 
        SetObjectMaterial(mci_01_variable, 0, 10765, "airportgnd_sfse", "white", 0x00000000);
        mci_01_variable = CreateObject(18980, 2507.269042, -1524.066772, 19.544946, 0.000000, 0.000000, 0.000000, 300.00); 
        SetObjectMaterial(mci_01_variable, 0, 10765, "airportgnd_sfse", "white", 0x00000000);
        mci_01_variable = CreateObject(18980, 2497.808105, -1524.066772, 19.544946, 0.000000, 0.000000, 0.000000, 300.00); 
        SetObjectMaterial(mci_01_variable, 0, 10765, "airportgnd_sfse", "white", 0x00000000);
        mci_01_variable = CreateObject(18980, 2498.789062, -1524.066772, 19.544946, 0.000000, 0.000000, 0.000000, 300.00); 
        SetObjectMaterial(mci_01_variable, 0, 10765, "airportgnd_sfse", "white", 0x00000000);
        mci_01_variable = CreateObject(19377, 2502.773437, -1538.277343, 31.936132, 0.000000, 90.000000, 0.000000, 300.00); 
        SetObjectMaterial(mci_01_variable, 0, 9920, "anotherbuildsfe", "gz_vic2d", 0x00000000);
        mci_01_variable = CreateObject(19377, 2502.773437, -1529.016479, 31.936132, 0.000000, 90.000000, 0.000000, 300.00); 
        SetObjectMaterial(mci_01_variable, 0, 9920, "anotherbuildsfe", "gz_vic2d", 0x00000000);
        mci_01_variable = CreateObject(19377, 2513.003662, -1529.016479, 31.936132, 0.000000, 90.000000, 0.000000, 300.00); 
        SetObjectMaterial(mci_01_variable, 0, 9920, "anotherbuildsfe", "gz_vic2d", 0x00000000);
        mci_01_variable = CreateObject(1897, 2509.234619, -1540.236816, 25.562023, 0.000007, 0.000000, 89.999977, 300.00); 
        SetObjectMaterial(mci_01_variable, 0, 1975, "texttest", "kb_red", 0x00000000);
        mci_01_variable = CreateObject(1897, 2511.766357, -1540.236816, 25.562023, -0.000007, 0.000000, -89.999977, 300.00); 
        SetObjectMaterial(mci_01_variable, 0, 1975, "texttest", "kb_red", 0x00000000);
        mci_01_variable = CreateObject(19922, 2516.619628, -1542.424194, 24.521995, 0.000000, 0.000000, 0.000000, 300.00); 
        SetObjectMaterial(mci_01_variable, 0, 10765, "airportgnd_sfse", "white", 0x00000000);
        mci_01_variable = CreateObject(19454, 2516.472900, -1528.646972, 24.431993, 0.000000, 90.000000, 0.000000, 300.00); 
        SetObjectMaterial(mci_01_variable, 0, 9514, "711_sfw", "ws_carpark2", 0x00000000);
        mci_01_variable = CreateObject(19435, 2513.053222, -1524.971923, 24.421993, 0.000000, 90.000000, 0.000000, 300.00); 
        SetObjectMaterial(mci_01_variable, 0, 9514, "711_sfw", "ws_carpark2", 0x00000000);
        mci_01_variable = CreateObject(19454, 2514.793945, -1529.812866, 22.761993, 0.000000, 0.000000, 0.000000, 300.00); 
        SetObjectMaterial(mci_01_variable, 0, 9514, "711_sfw", "ws_carpark2", 0x00000000);
        mci_01_variable = CreateObject(19454, 2513.462646, -1525.701538, 22.761993, 0.000000, 0.000000, 90.000000, 300.00); 
        SetObjectMaterial(mci_01_variable, 0, 9514, "711_sfw", "ws_carpark2", 0x00000000);
        mci_01_variable = CreateObject(14407, 2513.191894, -1531.953735, 21.321977, 0.000000, 0.000000, 0.000000, 300.00); 
        SetObjectMaterial(mci_01_variable, 0, 9514, "711_sfw", "ws_carpark2", 0x00000000);
        mci_01_variable = CreateObject(19454, 2512.862792, -1529.812866, 22.761993, 0.000000, 0.000000, 0.000000, 300.00); 
        SetObjectMaterial(mci_01_variable, 0, 9514, "711_sfw", "ws_carpark2", 0x00000000);
        mci_01_variable = CreateObject(19454, 2513.873779, -1529.801757, 22.811994, 0.000000, 90.000000, 0.000000, 300.00); 
        SetObjectMaterial(mci_01_variable, 0, 9514, "711_sfw", "ws_carpark2", 0x00000000);
        mci_01_variable = CreateObject(19435, 2512.042236, -1527.512329, 24.421993, 0.000000, 90.000000, 90.000000, 300.00); 
        SetObjectMaterial(mci_01_variable, 0, 9514, "711_sfw", "ws_carpark2", 0x00000000);
        mci_01_variable = CreateObject(19435, 2512.042236, -1530.972656, 24.421993, 0.000000, 90.000000, 90.000000, 300.00); 
        SetObjectMaterial(mci_01_variable, 0, 9514, "711_sfw", "ws_carpark2", 0x00000000);
        mci_01_variable = CreateObject(19435, 2512.042236, -1534.453735, 24.421993, 0.000000, 90.000000, 90.000000, 300.00); 
        SetObjectMaterial(mci_01_variable, 0, 9514, "711_sfw", "ws_carpark2", 0x00000000);
        mci_01_variable = CreateObject(19482, 2504.354492, -1524.045288, 30.339620, 0.000000, 0.000000, 90.000000, 300.00); 
        SetObjectMaterial(mci_01_variable, 0, 10101, "2notherbuildsfe", "Bow_Abpave_Gen", 0x00000000);
        SetObjectMaterialText(mci_01_variable, "@", 0, 130, "Webdings", 199, 0, 0xFFFFFFFF, 0x00000000, 1);
        mci_01_variable = CreateObject(19482, 2501.984375, -1524.045288, 30.339620, 0.000000, 0.000000, 90.000000, 300.00); 
        SetObjectMaterial(mci_01_variable, 0, 10101, "2notherbuildsfe", "Bow_Abpave_Gen", 0x00000000);
        SetObjectMaterialText(mci_01_variable, ""01_MAP_NAME_01"\n "01_MAP_NAME_02"", 0, 130, "Quartz MS", 100, 0, 0xFFFFFFFF, 0x00000000, 1);
        /////////////////////////////////////////////////////////////////////////////////////////////////////////////////
        /////////////////////////////////////////////////////////////////////////////////////////////////////////////////
        /////////////////////////////////////////////////////////////////////////////////////////////////////////////////
        mci_01_variable = CreateObject(14680, 2502.910888, -1539.339965, 30.193033, 0.000000, 0.000000, 0.000000, 300.00); 
        mci_01_variable = CreateObject(14680, 2502.910888, -1533.087524, 30.193033, 0.000000, 0.000000, 0.000000, 300.00); 
        mci_01_variable = CreateObject(14680, 2515.966308, -1533.087524, 30.193033, 0.000000, 0.000000, 0.000000, 300.00); 
        mci_01_variable = CreateObject(14680, 2515.966552, -1539.339965, 30.193033, 0.000000, 0.000000, 0.000000, 300.00); 
        mci_01_variable = CreateObject(14680, 2509.791015, -1539.339965, 30.193033, 0.000000, 0.000000, 0.000000, 300.00); 
        mci_01_variable = CreateObject(14680, 2509.791015, -1533.168090, 30.193033, 0.000000, 0.000000, 0.000000, 300.00); 
        mci_01_variable = CreateObject(19817, 2501.472900, -1538.022827, 22.971992, 0.000000, 0.000000, 180.000000, 300.00); 
        mci_01_variable = CreateObject(19903, 2503.804199, -1542.175781, 24.521995, 0.000000, 0.000000, 130.000000, 300.00); 
        mci_01_variable = CreateObject(925, 2498.422851, -1533.733764, 25.572019, 0.000000, 0.000000, 90.000000, 300.00); 
        mci_01_variable = CreateObject(3633, 2498.301513, -1542.138061, 25.002004, 0.000000, 0.000000, 0.000000, 300.00); 
        mci_01_variable = CreateObject(19899, 2506.205322, -1542.570556, 24.521995, 0.000000, 0.000000, 90.000000, 300.00); 
        mci_01_variable = CreateObject(2133, 2508.253173, -1542.560180, 24.521995, 0.000000, 0.000000, 180.000000, 300.00); 
        mci_01_variable = CreateObject(3632, 2517.882568, -1537.818481, 25.001998, 0.000000, 0.000000, 0.000000, 300.00); 
        mci_01_variable = CreateObject(19815, 2516.629150, -1543.077636, 26.022024, 0.000000, 0.000000, 180.000000, 300.00); 
        mci_01_variable = CreateObject(19921, 2517.586914, -1542.188354, 25.392011, 0.000000, 0.000000, 180.000000, 300.00); 
        mci_01_variable = CreateObject(1010, 2508.272705, -1542.643920, 25.581993, 0.000000, 0.000000, 20.000000, 300.00); 
        mci_01_variable = CreateObject(19621, 2516.502929, -1542.386596, 25.401996, 0.000000, 0.000000, 120.000000, 300.00); 
        mci_01_variable = CreateObject(2690, 2497.769531, -1532.295288, 24.872003, 0.000000, 0.000000, 0.000000, 300.00); 
        mci_01_variable = CreateObject(19900, 2499.030029, -1540.138305, 24.531995, 0.000000, 0.000000, 10.000000, 300.00); 
        mci_01_variable = CreateObject(2986, 2501.970703, -1529.011230, 24.550575, 0.000000, 0.000000, 0.000000, 300.00); 
        mci_01_variable = CreateObject(3006, 2498.208740, -1525.210815, 24.201988, 0.000000, 0.000000, 0.000000, 300.00); 
        mci_01_variable = CreateObject(1097, 2497.649902, -1531.262939, 25.011999, 0.000000, 0.000000, 0.000000, 300.00); 
        mci_01_variable = CreateObject(19921, 2505.563720, -1542.238403, 25.882015, 0.000000, 0.000000, 200.000000, 300.00); 
        mci_01_variable = CreateObject(1238, 2498.162841, -1535.648681, 24.852003, 0.000000, 0.000000, 0.000000, 300.00); 
        mci_01_variable = CreateObject(19898, 2501.661621, -1539.148071, 24.541996, 0.000000, 0.000000, 305.000000, 300.00); 
        mci_01_variable = CreateObject(19898, 2511.370849, -1539.148071, 24.541996, 0.000000, 0.000000, 405.000000, 300.00); 
        mci_01_variable = CreateObject(2986, 2501.960449, -1535.371337, 24.550575, 0.000000, 0.000000, 0.000000, 300.00); 
        mci_01_variable = CreateObject(2986, 2514.341552, -1527.780639, 22.920572, 0.000000, 0.000000, 0.000000, 300.00); 
        mci_01_variable = CreateObject(19903, 2513.173583, -1541.845458, 24.521995, 0.000000, 0.000000, 130.000000, 300.00); 
        mci_01_variable = CreateObject(3034, 2513.524902, -1543.024169, 30.241989, 0.000000, 0.000000, 180.000000, 300.00); 
        mci_01_variable = CreateObject(3034, 2502.263671, -1543.024169, 30.241989, 0.000000, 0.000000, 180.000000, 300.00); 
        mci_01_variable = CreateObject(19817, 2511.702392, -1527.813354, 23.322000, 0.000000, 0.000000, 270.000000, 300.00); 
        mci_01_variable = CreateObject(19898, 2513.924072, -1527.032836, 22.911983, 0.000000, 0.000000, -120.000015, 300.00); 
        mci_01_variable = CreateObject(19900, 2517.883544, -1537.113647, 24.517929, 0.000000, 0.000000, 0.000000, 300.00); 
        mci_01_variable = CreateObject(1431, 2517.829101, -1530.022216, 25.061996, 0.000000, 0.000000, 90.000000, 300.00); 
        mci_01_variable = CreateObject(930, 2497.949462, -1528.132568, 24.982004, 0.000000, 0.000000, 90.000000, 300.00); 
        mci_01_variable = CreateObject(2133, 2517.714355, -1535.149780, 24.521995, 0.000000, 0.000000, 270.000000, 300.00); 
        mci_01_variable = CreateObject(2133, 2517.714355, -1536.140625, 24.521995, 0.000000, 0.000000, 270.000000, 300.00); 
        mci_01_variable = CreateObject(19899, 2517.737304, -1533.237548, 24.521995, 0.000000, 0.000000, 180.000000, 300.00); 
        mci_01_variable = CreateObject(19921, 2517.586914, -1535.146606, 25.672018, 0.000000, 0.000000, -80.100082, 300.00); 
        mci_01_variable = CreateObject(19621, 2517.832031, -1537.786254, 25.572000, 0.000000, 0.000000, -156.500015, 300.00); 
        mci_01_variable = CreateObject(19121, 2518.321533, -1514.051513, 23.548389, 0.000000, 0.000000, 0.000000, 300.00); 
        mci_01_variable = CreateObject(19121, 2497.140380, -1514.051513, 23.548389, 0.000000, 0.000000, 0.000000, 300.00); 
    #elseif defined _streamer_included
        mci_01_variable = CreateDynamicObject(19377, 2502.562011, -1519.094848, 23.680757, -8.999997, 90.000000, 0.000000, -1, -1, -1, 300.00, 300.00); 
        SetDynamicObjectMaterial(mci_01_variable, 0, 9514, "711_sfw", "ws_carpark2", 0x00000000);
        mci_01_variable = CreateDynamicObject(19377, 2512.953857, -1519.094848, 23.680757, -8.999997, 90.000000, 0.000000, -1, -1, -1, 300.00, 300.00); 
        SetDynamicObjectMaterial(mci_01_variable, 0, 9514, "711_sfw", "ws_carpark2", 0x00000000);
        mci_01_variable = CreateDynamicObject(19377, 2502.562500, -1528.666259, 24.436058, 0.000000, 90.000000, 0.000000, -1, -1, -1, 300.00, 300.00); 
        SetDynamicObjectMaterial(mci_01_variable, 0, 9514, "711_sfw", "ws_carpark2", 0x00000000);
        mci_01_variable = CreateDynamicObject(19454, 2509.561279, -1528.646972, 24.431993, 0.000000, 90.000000, 0.000000, -1, -1, -1, 300.00, 300.00); 
        SetDynamicObjectMaterial(mci_01_variable, 0, 9514, "711_sfw", "ws_carpark2", 0x00000000);
        mci_01_variable = CreateDynamicObject(19377, 2512.963623, -1538.277343, 24.436058, 0.000000, 90.000000, 0.000000, -1, -1, -1, 300.00, 300.00); 
        SetDynamicObjectMaterial(mci_01_variable, 0, 9514, "711_sfw", "ws_carpark2", 0x00000000);
        mci_01_variable = CreateDynamicObject(19377, 2502.539794, -1538.277343, 24.436058, 0.000000, 90.000000, 0.000000, -1, -1, -1, 300.00, 300.00); 
        SetDynamicObjectMaterial(mci_01_variable, 0, 9514, "711_sfw", "ws_carpark2", 0x00000000);
        mci_01_variable = CreateDynamicObject(19377, 2518.316406, -1519.159179, 19.949995, 0.000000, 0.000000, 0.000000, -1, -1, -1, 300.00, 300.00); 
        SetDynamicObjectMaterial(mci_01_variable, 0, 10765, "airportgnd_sfse", "white", 0x00000000);
        mci_01_variable = CreateDynamicObject(19377, 2518.316406, -1528.788208, 19.259988, 0.000000, 0.000000, 0.000000, -1, -1, -1, 300.00, 300.00); 
        SetDynamicObjectMaterial(mci_01_variable, 0, 10765, "airportgnd_sfse", "white", 0x00000000);
        mci_01_variable = CreateDynamicObject(19377, 2518.316406, -1538.270019, 19.259988, 0.000000, 0.000000, 0.000000, -1, -1, -1, 300.00, 300.00); 
        SetDynamicObjectMaterial(mci_01_variable, 0, 10765, "airportgnd_sfse", "white", 0x00000000);
        mci_01_variable = CreateDynamicObject(19377, 2513.508056, -1543.170043, 19.259988, 0.000000, 0.000000, 90.000000, -1, -1, -1, 300.00, 300.00); 
        SetDynamicObjectMaterial(mci_01_variable, 0, 10765, "airportgnd_sfse", "white", 0x00000000);
        mci_01_variable = CreateDynamicObject(19377, 2503.925781, -1543.170043, 19.259988, 0.000000, 0.000000, 90.000000, -1, -1, -1, 300.00, 300.00); 
        SetDynamicObjectMaterial(mci_01_variable, 0, 10765, "airportgnd_sfse", "white", 0x00000000);
        mci_01_variable = CreateDynamicObject(19355, 2497.792480, -1543.178588, 22.768060, 0.000000, 0.000000, 90.000000, -1, -1, -1, 300.00, 300.00); 
        SetDynamicObjectMaterial(mci_01_variable, 0, 10765, "airportgnd_sfse", "white", 0x00000000);
        mci_01_variable = CreateDynamicObject(19377, 2518.308105, -1529.008666, 23.315097, 0.000000, 0.000000, 180.000000, -1, -1, -1, 300.00, 300.00); 
        SetDynamicObjectMaterial(mci_01_variable, 0, 10444, "hotelbackpool_sfs", "ws_hotel7", 0x00000000);
        mci_01_variable = CreateDynamicObject(19449, 2513.578369, -1524.087402, 30.270154, 0.000000, 0.000000, 90.000000, -1, -1, -1, 300.00, 300.00); 
        SetDynamicObjectMaterial(mci_01_variable, 0, 13059, "ce_fact03", "GB_truckdepot19", 0x00000000);
        mci_01_variable = CreateDynamicObject(19377, 2518.308105, -1538.439575, 23.315097, 0.000000, 0.000000, 360.000000, -1, -1, -1, 300.00, 300.00); 
        SetDynamicObjectMaterial(mci_01_variable, 0, 10444, "hotelbackpool_sfs", "ws_hotel7", 0x00000000);
        mci_01_variable = CreateDynamicObject(19377, 2513.588867, -1543.162475, 23.315097, 0.000000, 0.000000, 450.000000, -1, -1, -1, 300.00, 300.00); 
        SetDynamicObjectMaterial(mci_01_variable, 0, 10444, "hotelbackpool_sfs", "ws_hotel7", 0x00000000);
        mci_01_variable = CreateDynamicObject(19377, 2503.976562, -1543.162475, 23.315097, 0.000000, 0.000000, 450.000000, -1, -1, -1, 300.00, 300.00); 
        SetDynamicObjectMaterial(mci_01_variable, 0, 10444, "hotelbackpool_sfs", "ws_hotel7", 0x00000000);
        mci_01_variable = CreateDynamicObject(19355, 2498.922851, -1543.168579, 26.118074, 0.000000, 0.000000, 90.000000, -1, -1, -1, 300.00, 300.00); 
        SetDynamicObjectMaterial(mci_01_variable, 0, 10444, "hotelbackpool_sfs", "ws_hotel7", 0x00000000);
        mci_01_variable = CreateDynamicObject(19377, 2497.426757, -1529.008666, 23.315097, 0.000000, 0.000000, 180.000000, -1, -1, -1, 300.00, 300.00); 
        SetDynamicObjectMaterial(mci_01_variable, 0, 10444, "hotelbackpool_sfs", "ws_hotel7", 0x00000000);
        mci_01_variable = CreateDynamicObject(19377, 2497.426757, -1538.339843, 23.315097, 0.000000, 0.000000, 180.000000, -1, -1, -1, 300.00, 300.00); 
        SetDynamicObjectMaterial(mci_01_variable, 0, 10444, "hotelbackpool_sfs", "ws_hotel7", 0x00000000);
        mci_01_variable = CreateDynamicObject(19355, 2498.922851, -1543.168579, 26.808078, 0.000000, 0.000000, 90.000000, -1, -1, -1, 300.00, 300.00); 
        SetDynamicObjectMaterial(mci_01_variable, 0, 10444, "hotelbackpool_sfs", "ws_hotel7", 0x00000000);
        mci_01_variable = CreateDynamicObject(19449, 2518.308593, -1528.847900, 30.270154, 0.000000, 0.000000, 180.000000, -1, -1, -1, 300.00, 300.00); 
        SetDynamicObjectMaterial(mci_01_variable, 0, 13059, "ce_fact03", "GB_truckdepot19", 0x00000000);
        mci_01_variable = CreateDynamicObject(19449, 2518.308593, -1538.419799, 30.270154, 0.000000, 0.000000, 180.000000, -1, -1, -1, 300.00, 300.00); 
        SetDynamicObjectMaterial(mci_01_variable, 0, 13059, "ce_fact03", "GB_truckdepot19", 0x00000000);
        mci_01_variable = CreateDynamicObject(19355, 2498.922851, -1543.178588, 30.268075, 0.000000, 0.000000, 90.000000, -1, -1, -1, 300.00, 300.00); 
        SetDynamicObjectMaterial(mci_01_variable, 0, 13059, "ce_fact03", "GB_truckdepot19", 0x00000000);
        mci_01_variable = CreateDynamicObject(19449, 2513.575439, -1543.170288, 30.270154, 0.000000, 0.000000, 270.000000, -1, -1, -1, 300.00, 300.00); 
        SetDynamicObjectMaterial(mci_01_variable, 0, 13059, "ce_fact03", "GB_truckdepot19", 0x00000000);
        mci_01_variable = CreateDynamicObject(19449, 2504.043457, -1543.170288, 30.270154, 0.000000, 0.000000, 270.000000, -1, -1, -1, 300.00, 300.00); 
        SetDynamicObjectMaterial(mci_01_variable, 0, 13059, "ce_fact03", "GB_truckdepot19", 0x00000000);
        mci_01_variable = CreateDynamicObject(19449, 2497.423095, -1538.279418, 30.270154, 0.000000, 0.000000, 360.000000, -1, -1, -1, 300.00, 300.00); 
        SetDynamicObjectMaterial(mci_01_variable, 0, 13059, "ce_fact03", "GB_truckdepot19", 0x00000000);
        mci_01_variable = CreateDynamicObject(19449, 2497.423095, -1529.018920, 30.270154, 0.000000, 0.000000, 360.000000, -1, -1, -1, 300.00, 300.00); 
        SetDynamicObjectMaterial(mci_01_variable, 0, 13059, "ce_fact03", "GB_truckdepot19", 0x00000000);
        mci_01_variable = CreateDynamicObject(19449, 2502.145751, -1524.147460, 30.280172, 0.000000, 0.000000, 90.000000, -1, -1, -1, 300.00, 300.00); 
        SetDynamicObjectMaterial(mci_01_variable, 0, 13059, "ce_fact03", "GB_truckdepot19", 0x00000000);
        mci_01_variable = CreateDynamicObject(19377, 2512.963623, -1538.277343, 31.936132, 0.000000, 90.000000, 0.000000, -1, -1, -1, 300.00, 300.00); 
        SetDynamicObjectMaterial(mci_01_variable, 0, 9920, "anotherbuildsfe", "gz_vic2d", 0x00000000);
        mci_01_variable = CreateDynamicObject(19377, 2513.586181, -1524.087646, 23.315097, 0.000000, 0.000000, 90.000000, -1, -1, -1, 300.00, 300.00); 
        SetDynamicObjectMaterial(mci_01_variable, 0, 10444, "hotelbackpool_sfs", "ws_hotel7", 0x00000000);
        mci_01_variable = CreateDynamicObject(18980, 2508.270019, -1524.066772, 19.544946, 0.000000, 0.000000, 0.000000, -1, -1, -1, 300.00, 300.00); 
        SetDynamicObjectMaterial(mci_01_variable, 0, 10765, "airportgnd_sfse", "white", 0x00000000);
        mci_01_variable = CreateDynamicObject(18980, 2507.269042, -1524.066772, 19.544946, 0.000000, 0.000000, 0.000000, -1, -1, -1, 300.00, 300.00); 
        SetDynamicObjectMaterial(mci_01_variable, 0, 10765, "airportgnd_sfse", "white", 0x00000000);
        mci_01_variable = CreateDynamicObject(18980, 2497.808105, -1524.066772, 19.544946, 0.000000, 0.000000, 0.000000, -1, -1, -1, 300.00, 300.00); 
        SetDynamicObjectMaterial(mci_01_variable, 0, 10765, "airportgnd_sfse", "white", 0x00000000);
        mci_01_variable = CreateDynamicObject(18980, 2498.789062, -1524.066772, 19.544946, 0.000000, 0.000000, 0.000000, -1, -1, -1, 300.00, 300.00); 
        SetDynamicObjectMaterial(mci_01_variable, 0, 10765, "airportgnd_sfse", "white", 0x00000000);
        mci_01_variable = CreateDynamicObject(19377, 2502.773437, -1538.277343, 31.936132, 0.000000, 90.000000, 0.000000, -1, -1, -1, 300.00, 300.00); 
        SetDynamicObjectMaterial(mci_01_variable, 0, 9920, "anotherbuildsfe", "gz_vic2d", 0x00000000);
        mci_01_variable = CreateDynamicObject(19377, 2502.773437, -1529.016479, 31.936132, 0.000000, 90.000000, 0.000000, -1, -1, -1, 300.00, 300.00); 
        SetDynamicObjectMaterial(mci_01_variable, 0, 9920, "anotherbuildsfe", "gz_vic2d", 0x00000000);
        mci_01_variable = CreateDynamicObject(19377, 2513.003662, -1529.016479, 31.936132, 0.000000, 90.000000, 0.000000, -1, -1, -1, 300.00, 300.00); 
        SetDynamicObjectMaterial(mci_01_variable, 0, 9920, "anotherbuildsfe", "gz_vic2d", 0x00000000);
        mci_01_variable = CreateDynamicObject(1897, 2509.234619, -1540.236816, 25.562023, 0.000007, 0.000000, 89.999977, -1, -1, -1, 300.00, 300.00); 
        SetDynamicObjectMaterial(mci_01_variable, 0, 1975, "texttest", "kb_red", 0x00000000);
        mci_01_variable = CreateDynamicObject(1897, 2511.766357, -1540.236816, 25.562023, -0.000007, 0.000000, -89.999977, -1, -1, -1, 300.00, 300.00); 
        SetDynamicObjectMaterial(mci_01_variable, 0, 1975, "texttest", "kb_red", 0x00000000);
        mci_01_variable = CreateDynamicObject(19922, 2516.619628, -1542.424194, 24.521995, 0.000000, 0.000000, 0.000000, -1, -1, -1, 300.00, 300.00); 
        SetDynamicObjectMaterial(mci_01_variable, 0, 10765, "airportgnd_sfse", "white", 0x00000000);
        mci_01_variable = CreateDynamicObject(19454, 2516.472900, -1528.646972, 24.431993, 0.000000, 90.000000, 0.000000, -1, -1, -1, 300.00, 300.00); 
        SetDynamicObjectMaterial(mci_01_variable, 0, 9514, "711_sfw", "ws_carpark2", 0x00000000);
        mci_01_variable = CreateDynamicObject(19435, 2513.053222, -1524.971923, 24.421993, 0.000000, 90.000000, 0.000000, -1, -1, -1, 300.00, 300.00); 
        SetDynamicObjectMaterial(mci_01_variable, 0, 9514, "711_sfw", "ws_carpark2", 0x00000000);
        mci_01_variable = CreateDynamicObject(19454, 2514.793945, -1529.812866, 22.761993, 0.000000, 0.000000, 0.000000, -1, -1, -1, 300.00, 300.00); 
        SetDynamicObjectMaterial(mci_01_variable, 0, 9514, "711_sfw", "ws_carpark2", 0x00000000);
        mci_01_variable = CreateDynamicObject(19454, 2513.462646, -1525.701538, 22.761993, 0.000000, 0.000000, 90.000000, -1, -1, -1, 300.00, 300.00); 
        SetDynamicObjectMaterial(mci_01_variable, 0, 9514, "711_sfw", "ws_carpark2", 0x00000000);
        mci_01_variable = CreateDynamicObject(14407, 2513.191894, -1531.953735, 21.321977, 0.000000, 0.000000, 0.000000, -1, -1, -1, 300.00, 300.00); 
        SetDynamicObjectMaterial(mci_01_variable, 0, 9514, "711_sfw", "ws_carpark2", 0x00000000);
        mci_01_variable = CreateDynamicObject(19454, 2512.862792, -1529.812866, 22.761993, 0.000000, 0.000000, 0.000000, -1, -1, -1, 300.00, 300.00); 
        SetDynamicObjectMaterial(mci_01_variable, 0, 9514, "711_sfw", "ws_carpark2", 0x00000000);
        mci_01_variable = CreateDynamicObject(19454, 2513.873779, -1529.801757, 22.811994, 0.000000, 90.000000, 0.000000, -1, -1, -1, 300.00, 300.00); 
        SetDynamicObjectMaterial(mci_01_variable, 0, 9514, "711_sfw", "ws_carpark2", 0x00000000);
        mci_01_variable = CreateDynamicObject(19435, 2512.042236, -1527.512329, 24.421993, 0.000000, 90.000000, 90.000000, -1, -1, -1, 300.00, 300.00); 
        SetDynamicObjectMaterial(mci_01_variable, 0, 9514, "711_sfw", "ws_carpark2", 0x00000000);
        mci_01_variable = CreateDynamicObject(19435, 2512.042236, -1530.972656, 24.421993, 0.000000, 90.000000, 90.000000, -1, -1, -1, 300.00, 300.00); 
        SetDynamicObjectMaterial(mci_01_variable, 0, 9514, "711_sfw", "ws_carpark2", 0x00000000);
        mci_01_variable = CreateDynamicObject(19435, 2512.042236, -1534.453735, 24.421993, 0.000000, 90.000000, 90.000000, -1, -1, -1, 300.00, 300.00); 
        SetDynamicObjectMaterial(mci_01_variable, 0, 9514, "711_sfw", "ws_carpark2", 0x00000000);
        mci_01_variable = CreateDynamicObject(19482, 2504.354492, -1524.045288, 30.339620, 0.000000, 0.000000, 90.000000, -1, -1, -1, 300.00, 300.00); 
        SetDynamicObjectMaterial(mci_01_variable, 0, 10101, "2notherbuildsfe", "Bow_Abpave_Gen", 0x00000000);
        SetDynamicObjectMaterialText(mci_01_variable, 0, "@", 130, "Webdings", 199, 0, 0xFFFFFFFF, 0x00000000, 1);
        mci_01_variable = CreateDynamicObject(19482, 2501.984375, -1524.045288, 30.339620, 0.000000, 0.000000, 90.000000, -1, -1, -1, 300.00, 300.00); 
        SetDynamicObjectMaterial(mci_01_variable, 0, 10101, "2notherbuildsfe", "Bow_Abpave_Gen", 0x00000000);
        SetDynamicObjectMaterialText(mci_01_variable, 0, ""01_MAP_NAME_01"\n "01_MAP_NAME_02"", 130, "Quartz MS", 100, 0, 0xFFFFFFFF, 0x00000000, 1);
        /////////////////////////////////////////////////////////////////////////////////////////////////////////////////
        /////////////////////////////////////////////////////////////////////////////////////////////////////////////////
        /////////////////////////////////////////////////////////////////////////////////////////////////////////////////
        mci_01_variable = CreateDynamicObject(14680, 2502.910888, -1539.339965, 30.193033, 0.000000, 0.000000, 0.000000, -1, -1, -1, 300.00, 300.00); 
        mci_01_variable = CreateDynamicObject(14680, 2502.910888, -1533.087524, 30.193033, 0.000000, 0.000000, 0.000000, -1, -1, -1, 300.00, 300.00); 
        mci_01_variable = CreateDynamicObject(14680, 2515.966308, -1533.087524, 30.193033, 0.000000, 0.000000, 0.000000, -1, -1, -1, 300.00, 300.00); 
        mci_01_variable = CreateDynamicObject(14680, 2515.966552, -1539.339965, 30.193033, 0.000000, 0.000000, 0.000000, -1, -1, -1, 300.00, 300.00); 
        mci_01_variable = CreateDynamicObject(14680, 2509.791015, -1539.339965, 30.193033, 0.000000, 0.000000, 0.000000, -1, -1, -1, 300.00, 300.00); 
        mci_01_variable = CreateDynamicObject(14680, 2509.791015, -1533.168090, 30.193033, 0.000000, 0.000000, 0.000000, -1, -1, -1, 300.00, 300.00); 
        mci_01_variable = CreateDynamicObject(19817, 2501.472900, -1538.022827, 22.971992, 0.000000, 0.000000, 180.000000, -1, -1, -1, 300.00, 300.00); 
        mci_01_variable = CreateDynamicObject(19903, 2503.804199, -1542.175781, 24.521995, 0.000000, 0.000000, 130.000000, -1, -1, -1, 300.00, 300.00); 
        mci_01_variable = CreateDynamicObject(925, 2498.422851, -1533.733764, 25.572019, 0.000000, 0.000000, 90.000000, -1, -1, -1, 300.00, 300.00); 
        mci_01_variable = CreateDynamicObject(3633, 2498.301513, -1542.138061, 25.002004, 0.000000, 0.000000, 0.000000, -1, -1, -1, 300.00, 300.00); 
        mci_01_variable = CreateDynamicObject(19899, 2506.205322, -1542.570556, 24.521995, 0.000000, 0.000000, 90.000000, -1, -1, -1, 300.00, 300.00); 
        mci_01_variable = CreateDynamicObject(2133, 2508.253173, -1542.560180, 24.521995, 0.000000, 0.000000, 180.000000, -1, -1, -1, 300.00, 300.00); 
        mci_01_variable = CreateDynamicObject(3632, 2517.882568, -1537.818481, 25.001998, 0.000000, 0.000000, 0.000000, -1, -1, -1, 300.00, 300.00); 
        mci_01_variable = CreateDynamicObject(19815, 2516.629150, -1543.077636, 26.022024, 0.000000, 0.000000, 180.000000, -1, -1, -1, 300.00, 300.00); 
        mci_01_variable = CreateDynamicObject(19921, 2517.586914, -1542.188354, 25.392011, 0.000000, 0.000000, 180.000000, -1, -1, -1, 300.00, 300.00); 
        mci_01_variable = CreateDynamicObject(1010, 2508.272705, -1542.643920, 25.581993, 0.000000, 0.000000, 20.000000, -1, -1, -1, 300.00, 300.00); 
        mci_01_variable = CreateDynamicObject(19621, 2516.502929, -1542.386596, 25.401996, 0.000000, 0.000000, 120.000000, -1, -1, -1, 300.00, 300.00); 
        mci_01_variable = CreateDynamicObject(2690, 2497.769531, -1532.295288, 24.872003, 0.000000, 0.000000, 0.000000, -1, -1, -1, 300.00, 300.00); 
        mci_01_variable = CreateDynamicObject(19900, 2499.030029, -1540.138305, 24.531995, 0.000000, 0.000000, 10.000000, -1, -1, -1, 300.00, 300.00); 
        mci_01_variable = CreateDynamicObject(2986, 2501.970703, -1529.011230, 24.550575, 0.000000, 0.000000, 0.000000, -1, -1, -1, 300.00, 300.00); 
        mci_01_variable = CreateDynamicObject(3006, 2498.208740, -1525.210815, 24.201988, 0.000000, 0.000000, 0.000000, -1, -1, -1, 300.00, 300.00); 
        mci_01_variable = CreateDynamicObject(1097, 2497.649902, -1531.262939, 25.011999, 0.000000, 0.000000, 0.000000, -1, -1, -1, 300.00, 300.00); 
        mci_01_variable = CreateDynamicObject(19921, 2505.563720, -1542.238403, 25.882015, 0.000000, 0.000000, 200.000000, -1, -1, -1, 300.00, 300.00); 
        mci_01_variable = CreateDynamicObject(1238, 2498.162841, -1535.648681, 24.852003, 0.000000, 0.000000, 0.000000, -1, -1, -1, 300.00, 300.00); 
        mci_01_variable = CreateDynamicObject(19898, 2501.661621, -1539.148071, 24.541996, 0.000000, 0.000000, 305.000000, -1, -1, -1, 300.00, 300.00); 
        mci_01_variable = CreateDynamicObject(19898, 2511.370849, -1539.148071, 24.541996, 0.000000, 0.000000, 405.000000, -1, -1, -1, 300.00, 300.00); 
        mci_01_variable = CreateDynamicObject(2986, 2501.960449, -1535.371337, 24.550575, 0.000000, 0.000000, 0.000000, -1, -1, -1, 300.00, 300.00); 
        mci_01_variable = CreateDynamicObject(2986, 2514.341552, -1527.780639, 22.920572, 0.000000, 0.000000, 0.000000, -1, -1, -1, 300.00, 300.00); 
        mci_01_variable = CreateDynamicObject(19903, 2513.173583, -1541.845458, 24.521995, 0.000000, 0.000000, 130.000000, -1, -1, -1, 300.00, 300.00); 
        mci_01_variable = CreateDynamicObject(3034, 2513.524902, -1543.024169, 30.241989, 0.000000, 0.000000, 180.000000, -1, -1, -1, 300.00, 300.00); 
        mci_01_variable = CreateDynamicObject(3034, 2502.263671, -1543.024169, 30.241989, 0.000000, 0.000000, 180.000000, -1, -1, -1, 300.00, 300.00); 
        mci_01_variable = CreateDynamicObject(19817, 2511.702392, -1527.813354, 23.322000, 0.000000, 0.000000, 270.000000, -1, -1, -1, 300.00, 300.00); 
        mci_01_variable = CreateDynamicObject(19898, 2513.924072, -1527.032836, 22.911983, 0.000000, 0.000000, -120.000015, -1, -1, -1, 300.00, 300.00); 
        mci_01_variable = CreateDynamicObject(19900, 2517.883544, -1537.113647, 24.517929, 0.000000, 0.000000, 0.000000, -1, -1, -1, 300.00, 300.00); 
        mci_01_variable = CreateDynamicObject(1431, 2517.829101, -1530.022216, 25.061996, 0.000000, 0.000000, 90.000000, -1, -1, -1, 300.00, 300.00); 
        mci_01_variable = CreateDynamicObject(930, 2497.949462, -1528.132568, 24.982004, 0.000000, 0.000000, 90.000000, -1, -1, -1, 300.00, 300.00); 
        mci_01_variable = CreateDynamicObject(2133, 2517.714355, -1535.149780, 24.521995, 0.000000, 0.000000, 270.000000, -1, -1, -1, 300.00, 300.00); 
        mci_01_variable = CreateDynamicObject(2133, 2517.714355, -1536.140625, 24.521995, 0.000000, 0.000000, 270.000000, -1, -1, -1, 300.00, 300.00); 
        mci_01_variable = CreateDynamicObject(19899, 2517.737304, -1533.237548, 24.521995, 0.000000, 0.000000, 180.000000, -1, -1, -1, 300.00, 300.00); 
        mci_01_variable = CreateDynamicObject(19921, 2517.586914, -1535.146606, 25.672018, 0.000000, 0.000000, -80.100082, -1, -1, -1, 300.00, 300.00); 
        mci_01_variable = CreateDynamicObject(19621, 2517.832031, -1537.786254, 25.572000, 0.000000, 0.000000, -156.500015, -1, -1, -1, 300.00, 300.00); 
        mci_01_variable = CreateDynamicObject(19121, 2518.321533, -1514.051513, 23.548389, 0.000000, 0.000000, 0.000000, -1, -1, -1, 300.00, 300.00); 
        mci_01_variable = CreateDynamicObject(19121, 2497.140380, -1514.051513, 23.548389, 0.000000, 0.000000, 0.000000, -1, -1, -1, 300.00, 300.00); 
    #endif

    #if defined MCI_01_OnGameModeInit
        return MCI_01_OnGameModeInit();
    #else
        return true;
    #endif
}

#if defined _ALS_OnPlayerConnect
    #undef OnPlayerConnect
#else
    #define _ALS_OnPlayerConnect
#endif
#define OnPlayerConnect MCI_01_OnPlayerConnect
#if defined MCI_01_OnPlayerConnect
    forward MCI_01_OnPlayerConnect(playerid);
#endif

#if defined _ALS_OnGameModeInit
    #undef OnGameModeInit
#else
    #define _ALS_OnGameModeInit
#endif
#define OnGameModeInit MCI_01_OnGameModeInit
#if defined MCI_01_OnGameModeInit
    forward MCI_01_OnGameModeInit();
#endif