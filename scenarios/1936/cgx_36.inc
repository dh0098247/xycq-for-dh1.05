##############################
# Country definition for CGX #
##############################
#####################
# Country main data #
#####################

country =
{ tag                    = CGX
  regular_id             = CHI
  intrinsic_gov_type     = paternal_autocrat
  extra_tc               = 10
  transports             = 40
  escorts                = 10
  # Resource Reserves
  energy                 = 200
  metal                  = 200
  rare_materials         = 100
  oil                    = 100
  supplies               = 1000
  money                  = 50
  capital                = 1258 # Guilin

	research_mod = 1.00
	peacetime_ic_mod = 0.80

  manpower               = 400
  dissent                = 10
  diplomacy =
  { relation = { tag = CHC value = -200 }
    relation = { tag = CHI value = 200 }
    relation = { tag = CSX value = 200 }
    relation = { tag = CXB value = 200 }
    relation = { tag = CYN value = 200 }
    relation = { tag = U70 value = 120 }
    relation = { tag = U95 value = 120 }
    relation = { tag = JAP value = -75 }
    relation = { tag = MAN value = -75 }
    relation = { tag = U01 value = 200 }
  }
   SpyInfo                = {  country = "CGX" NumberOfSpies = 1  } 
  nationalprovinces      = { 1242 1243 1244 1245 1246 1247 1250 1251 1252 1254 1255 1256 1257 1258 1259 1260 1261 1262 1309 1310 1311 1319 1320 1325
                             1326 1328 1333 1363 1364 1365 2670 2671 2672 2674 2676 2677 2678 2679 2680 2681 2682 2683 2684 2685 2686 2687 2688 2689
                             2690 2691 2692 2693 2694 2695 2696 2697 2698 2699 2700 2701 2702 2703 2704 2705 2706 2707 2708 2709 2710 2711 2712 2713
                             2714 2715 2716 2717 2718 2719 2720 2721 2722 2723 2724 2725 2726 2727 2728 2729 2730 2731 2732 2733 2734 2735 2736 2737
                             2738 2739 2740 2741 2742 2743 2744 2745 3590 3591 3592 3593 3594 3702 3703 3704 3705 3706 3707 3708 3709 3767 3768 1321
                             1313 1314 1317 1312 1248 1249 }
  ownedprovinces         = { 1248 1249 1258 1309 1310 1311 1312 1313 1314 1317 1318 1319 1321 1325 2707 2708 2709 2710 2711 2712 2713 2714 2715 2716
                             2717 2718 2719 2720 2721 2722 2723 2724 2725 2726 2727 2728 2729 2730 2731 2732 2733 2734 2735 2736 2739 3767 3768 1320
                           }
  controlledprovinces    = { 1248 1249 1258 1309 1310 1311 1312 1313 1314 1317 1318 1319 1321 1325 2707 2708 2709 2710 2711 2712 2713 2714 2715 2716
                             2717 2718 2719 2720 2721 2722 2723 2724 2725 2726 2727 2728 2729 2730 2731 2732 2733 2734 2735 2736 2739 3767 3768 1320
                           } 
  # Guangxi
  # ROTW Minor Tech '36
  # Group E 1936 techs
  # ######################
  # GW fighter
  techapps               = { 5050 5080
                             1010 1100 1830
                             6050 6010
                             8010 8020
                             7410 1900 
                           }
  blueprints = { }
  policy =
  { date              = { year = 0 month = january day = 0 }
    democratic        = 3
    political_left    = 4
    freedom           = 3
    free_market       = 3
    professional_army = 10
    defense_lobby     = 1
    interventionism   = 2
  }
  headofstate            = { type = 9 id = 502002 }
  headofgovernment       = { type = 9 id = 502001 }
  foreignminister        = { type = 9 id = 502003 }
  armamentminister       = { type = 9 id = 502004 }
  ministerofsecurity     = { type = 9 id = 502005 }
  ministerofintelligence = { type = 9 id = 502006 }
  chiefofstaff           = { type = 9 id = 502007 }
  chiefofarmy            = { type = 9 id = 502008 }
  chiefofnavy            = { type = 9 id = 502009 }
  chiefofair             = { type = 9 id = 502010 }
  # ######
  # GUANGXI OOB
  # ######
  landunit =
  { location = 1313 # Guangzhou
    name     = "廣西衛戍司令部 "
    id       = { type = 22400 id = 1 }
    division =
    { experience = 30
      id         = { type = 22400 id = 2 }
      name       = "訓導師 "
      type       = infantry
      strength   = 100
      model      = 37
      extra    = police
    }
    division =
    { experience = 10
      id         = { type = 22400 id = 3 }
      name       = "廣西省民防總隊 "
      type       = militia
      strength   = 50
      model      = 9
    }
    division =
    { experience = 10
      id         = { type = 22400 id = 4 }
      name       = "廣西省警察總隊 "
      type       = militia
      strength   = 50
      model      = 9
    }
  }

  landunit =
  { location = 1310 # Liuzhou
    name     = "國民革命軍第7‘鋼軍’軍 "
    id       = { type = 22400 id = 1007 }
    division =
    {  id         = { type = 22400 id = 170 }
      name       = "陸軍第170師（第7軍-桂系） "
      type       = motorized
      strength   = 100
      model      = 37
      extra    = engineer
      experience = 30
    }
    division =
    { experience = 40
      id         = { type = 22400 id = 171 }
      name       = "陸軍第171師（第7軍-桂系） "
      type       = motorized
      strength   = 100
      model      = 37
      extra    = artillery
      experience = 30
    }
    division =
    { experience = 50
      id         = { type = 22400 id = 172 }
      name       = "陸軍第172'桂軍之花'師 "
      type       = Mechanized
      strength   = 100
      model      = 19
      extra    = artillery
      experience = 50
    }
  }

landunit =
  { location = 1309 # Baise
    name     = "國民革命軍第31軍 "
    leader   = 50215 # 劉士毅
    id       = { type = 22400 id = 1031 }
    division =
    { experience = 15
      id         = { type = 22400 id = 173 }
      name       = "陸軍第173師（第31軍-桂系） "
      type       = infantry
      model      = 37
      strength = 60
      extra = police
    }
    division =
    { experience = 15
      id         = { type = 22400 id = 174 }
      name       = "陸軍第174師（第31軍-桂系） "
      type       = infantry
      model      = 37
      strength = 60
      extra    = artillery
    }    dig_in   = 20.000
  }

landunit =
  { location = 1310 # Liuzhou
    name     = "國民革命軍第48軍 "
    id       = { type = 22400 id = 1048 }
    division =
    { experience = 15
      id         = { type = 22400 id = 168 }
      name       = "陸軍第175師（第48軍-桂系） "
      type       = infantry
      model      = 37
      strength = 60
      extra    = police
    }
    division =
    { experience = 15
      id         = { type = 22400 id = 169 }
      name       = "陸軍第176師（第48軍-桂系） "
      type       = infantry
      model      = 37
      strength = 60
      extra = engineer
    }    dig_in   = 20.000
  }
landunit =
  { location = 1312 # Shaoguan
    name     = "桂系-國民革命軍第30軍 "
    # ## leader = # Chang Ta
    id       = { type = 22400 id = 13 }
    division =
    { experience = 30
      id         = { type = 22400 id = 14 }
      name       = "桂軍-陸軍第131師 "
      type       = infantry
      strength   = 60
      model      = 37
      extra    = police
    }
    division =
    { experience = 30
      id         = { type = 22400 id = 15 }
      name       = "桂軍-陸軍第135師 "
      type       = infantry
      strength   = 60
      model      = 37
      extra    = engineer
    }
    division =
    { experience = 30
      id         = { type = 22400 id = 16 }
      name       = "桂軍-陸軍第138師 "
      type       = infantry
      strength   = 100
      model      = 37
      extra    = engineer
    }
  }

 landunit =
  { location = 1313 # 廣州
    name     = "粵省綏靖公署 "
    id       = { type = 22400 id = 175 }
    division =
    { id       = { type = 22400 id = 176 }
      name     = "廣州綏靖公署 "
      type     = militia
      strength     = 100
      model    = 9
    }
    division =
    { id       = { type = 22400 id = 177 }
      name     = "廣東警察總隊 "
      type     = militia
      strength     = 100
      model    = 9
    }
    division =
    { id       = { type = 22400 id = 178 }
      name     = "廣東保安總隊 "
      type     = militia
      strength     = 100
      model    = 9
    }
  }

landunit =
  { location = 1258 # 桂林
    name     = "桂省綏靖公署 "
    id       = { type = 22400 id = 179 }
    division =
    { id       = { type = 22400 id = 180 }
      name     = "桂林綏靖公署 "
      type     = militia
      strength     = 100
      model    = 9
    }
  }
landunit =
  { location = 1258 # Guilin
    name     = "湖南新警備司令部 "
    # ## leader = #
    id       = { type = 22400 id = 192 }
    division =
    { experience   = 10
      id           = { type = 22400 id = 193 }
      name         = "第34新編師 "
      type         = infantry
      strength     = 50
      model        = 37
    }
  }
  landunit =
  { location = 1311 # Wuzhou
    name     = "寧波警備司令部 "
    # ## leader = #
    id       = { type = 22400 id = 215 }
    division =
    { id           = { type = 22400 id = 216 }
      name         = "獨立第27師 "
      type         = infantry
      strength     = 25
      model        = 37
    }
  }
  landunit =
  { location = 1312 # Shaoguan
    name     = "國民革命軍第84軍 "
    # ## leader = 50162 # Guo Rudong
    id       = { type = 22400 id = 106 }
    division =
    { id    = { type = 22400 id = 107 }
      name  = "第20軍 "
      type  = infantry
      model = 37
      strength     = 30
    }
  }
  landunit =
  { location = 1313 # Guangzhou
    name     = "國民革命軍第46軍 "
    # ## leader = 50050 # Jiang Dingwen
    id       = { type = 22400 id = 46 }
    division =
    { id    = { type = 22400 id = 47 }
      name  = "第22軍 "
      type  = infantry
      model = 37
      strength     = 30
    }
  }
   landunit =
  { location = 1309 # Bose
    name     = "廣西民防總團"
    # ## leader = #
    id       = { type = 22400 id = 161 }
    division =
    { id    = { type = 22400 id = 162 }
      name  = "第14軍 "
      type  = infantry
      model = 37
      strength     = 30
    }
  }
  landunit =
  { location = 1310 # Liuzhou
    name     = "柳州守備旅 "
    # ## leader = 50219 # Luo Zhuoying
    id       = { type = 22400 id = 50 }
    division =
    { id    = { type = 22400 id = 51 }
      name  = "第18軍 "
      type  = infantry
      model = 37
      strength     = 30
    }
  }
  landunit =
  { location = 1258 # Guilin
    name     = "南寧警備司令部 "
    # ## leader = 50104 # Xiao Zhichu
    id       = { type = 22400 id = 62 }
    division =
    { id    = { type = 22400 id = 63 }
      name  = "第26軍 "
      type  = infantry
      model = 37
      strength     = 30
    }
  }
 airunit =
  { location = 1319 # Nanning
    id       = { type = 22400 id = 1005 }
    leader   = 502025 # 李凌云
    name     = "廣西航空學校 "
    base     = 1319 # Nanning
    division =
    { id           = { type = 22400 id = 2005 }
      name         = "飛機教導大隊 "
      strength     = 50
      type         = interceptor
      model        = 0
    }
  }
   navalunit =
  { location = 1313 # 廣州
    base     = 1313
    name     = "中華民國廣東江防艦隊 "
    id       = { type = 22400 id = 1030 }
    leader   = 502028 # 李慶文
    division =
    { id    = { type = 22400 id = 1032 }
      name  = "肇和號 "
      type  = light_cruiser
      model = 0
    }
    division =
    { id    = { type = 22400 id = 1037 }
      name  = "輕炮艦編隊 "
      type  = destroyer
      model = 0
    }
    division =
    { id    = { type = 22400 id = 1039 }
      name  = "福安號運輸艦 "
      type  = transport
      model = 0
    }
  }
}
