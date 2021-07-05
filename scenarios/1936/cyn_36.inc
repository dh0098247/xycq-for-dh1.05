##############################
# Country definition for CYN #
##############################

country =
{ tag                    = CYN
  regular_id             = CHI
  intrinsic_gov_type     = paternal_autocrat
  extra_tc               = 4
  # Resource Reserves
  energy                 = 200
  metal                  = 200
  rare_materials         = 100
  oil                    = 100
  supplies               = 100
  money                  = 50
  capital                = 1307 # Kunming

	research_mod = 1.00
	peacetime_ic_mod = 0.8

  manpower               = 200
  dissent                = 10
  policy =
  { date              = { year = 0 month = january day = 0 }
    democratic        = 3
    political_left    = 4
    freedom           = 3
    free_market       = 3
    professional_army = 10
    defense_lobby     = 5
    interventionism   = 1
  }
  nationalprovinces      = { 1258 1262 1263 1265 1279 1280 1281 1282 1283 1292 1293 1294 1305 1307 1308 1309 1310 1311 1319 1327 1360 1361 1362 1363
                             1364 1365 1890 1898 2719 2720 2721 2722 2723 2724 2725 2726 2727 2728 2729 2730 2731 2732 2733 2734 2735 2736 2737 2738
                             2740 2741 2742 2743 2744 2745 2746 2747 2749 2750 2751 2752 2753 2754 2755 2756 2757 2758 2759 2760 2761 2762 2763 2764
                             2765 2766 2767 2768 2769 2770 2771 2772 2773 2774 2775 2776 2777 2778 2779 2780 2972 2973 2974 2975 2976 2977 3000 1888 2651
                           }
  ownedprovinces         = { 1282 1293 1294 1305 1307 1308 1327 1362 1898 2746 2747 2749 2750 2751 2752 2753 2754 2755 2756 2757 2758 2759 2760
                             2761 2762 2763 2764 2765 2972 2973 2974 2975 2977
                           }
  controlledprovinces    = { 1282 1293 1294 1305 1307 1308 1327 1362 1898 2746 2747 2749 2750 2751 2752 2753 2754 2755 2756 2757 2758 2759 2760
                             2761 2762 2763 2764 2765 2972 2973 2974 2975 2977
                           }
  # ROTW Minor Tech '36
  # Group E 1936 techs
  # ######################
  # GW fighter
  techapps               = { 
                             1010 1100
                             6050 6010
                             7410 1900 
                           }

  diplomacy =
  { relation = { tag = CHI value = 200 }
    relation = { tag = CSX value = 200 }
    relation = { tag = CXB value = 200 }
    relation = { tag = CGX value = 200 }
    relation = { tag = JAP value = -75 }
    relation = { tag = MAN value = -75 }
    relation = { tag = CHC value = -200 }
    relation = { tag = U70 value = 120 }
    relation = { tag = U95 value = 120 }
  }
  headofstate            = { type = 9 id = 501001 }
  headofgovernment       = { type = 9 id = 501002 }
  foreignminister        = { type = 9 id = 501003 }
  armamentminister       = { type = 9 id = 501004 }
  ministerofsecurity     = { type = 9 id = 501005 }
  ministerofintelligence = { type = 9 id = 501006 }
  chiefofstaff           = { type = 9 id = 501007 }
  chiefofarmy            = { type = 9 id = 501008 }
  chiefofnavy            = { type = 9 id = 501009 }
  chiefofair             = { type = 9 id = 501010 }
  # ######
  # CHINA 1936 OOB
  # ######
  landunit =
  { location = 1307 # Kunming
    name     = "國民革命軍第60'國之勁旅'軍 "
    leader   = 501005 # 盧漢
    id       = { type = 22100 id = 1060 }
    division =
    {  experience = 60
    	 id       = { type = 22100 id = 182 }
      name     = "陸軍第182師（第60軍-滇系） "
      type     = Mechanized
      strength = 100
      max_strength = 100
      model    = 19
      extra    = artillery
      brigade_model = 2
    }
    division =
    {  experience = 50
    	id       = { type = 22100 id = 183 }
      name     = "陸軍第183師（第60軍-滇系） "
      type     = bergsjaeger
      strength = 100
      max_strength = 100
      model    = 0
      extra    = engineer
      brigade_model = 1
    }
    division =
    { experience = 70
    	id       = { type = 22100 id = 184 }
      name     = "陸軍第184師（第60軍-滇系） "
      type     = Mechanized
      strength = 100
      max_strength = 100
      model    = 19
      extra    = artillery
      brigade_model = 2
    }
  }

  landunit =
  { location = 1307 # 昆明
    name     = "昆明警備司令部 "
    id       = { type = 22100 id = 2060 }
    division =
    { id    = { type = 22100 id = 601 }
      name  = "陸軍第十路軍第1旅 "
      type  = infantry
      strength = 30
      model = 37
    }
    division =
    { id    = { type = 22100 id = 608 }
      name  = "陸軍第十路軍第2旅 "
      type  = infantry
      strength = 30
      model = 37
    }
  }

  landunit =
  { location = 1308 # Qujing
    name     = "玉溪警備司令部 "
    id       = { type = 22100 id = 3060 }
    division =
    { id    = { type = 22100 id = 605 }
      name  = "陸軍第十路軍第5旅 "
      type  = infantry
      strength = 30
      model = 37
    }
    division =
    { id    = { type = 22100 id = 609 }
      name  = "陸軍第十路軍第3旅 "
      type  = infantry
      strength = 30
      model = 37
    }
  }

  landunit =
  { location = 1327 # 文山
    name     = "保山警備司令部 "
    id       = { type = 22100 id = 4060 }
    division =
    { id    = { type = 22100 id = 607 }
      name  = "陸軍第十路軍第7旅 "
      type  = infantry
      strength = 30
      model = 37
    }
    division =
    { id    = { type = 22100 id = 610}
      name  = "陸軍第十路軍第9旅 "
      type  = infantry
      strength = 30
      model = 37
    }
  }



 landunit =
  { location = 1307 # 昆明
    name     = "滇省綏靖公署 "
    id       = { type = 22100 id = 41307 }
    division =
    { id       = { type = 22100 id = 51307 }
      name     = "昆明綏靖公署 "
      type     = militia
      strength     = 80
      model    = 9
    }
    division =
    { id       = { type = 22100 id = 71307 }
      name     = "云南保安總隊 "
      type     = militia
      strength     = 80
      model    = 9
    }
  }
}
