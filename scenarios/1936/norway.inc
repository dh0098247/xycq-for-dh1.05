##############################
# Country definition for NOR #
##############################
province = {
  id = 107 # ��˹½
}
province = {
  id = 110 # ������
}
province = {
  id = 125 # �ɶ�ά��
}
province = {
  id = 129 # �߶���
}

#####################
# Country main data #
#####################

country = {
  tag                = NOR
  regular_id         = FIN
  capital            = 107 # ��˹½
  manpower           = 400
  research_mod           = 1
  peacetime_ic_mod       = 0.6
  # Resource Reserves
  energy         = 1000
  metal          = 1000
  rare_materials = 500
  oil            = 500
  supplies       = 500
  money          = 100
  transports     = 400
  escorts        = 50

  diplomacy = {
    relation = { tag = BEL value = 100 }
    relation = { tag = ENG value = 90 }
    relation = { tag = FIN value = 75 }
    relation = { tag = HOL value = 100 }
    relation = { tag = LUX value = 100 }
    relation = { tag = SWE value = 150 }
    relation = { tag = USA value = 75 }
    relation = {
      tag        = DEN
      value      = 150
      guaranteed = { year = 1935 month = december day = 30 }
    }
  }
  SpyInfo                = { country = "NOR" NumberOfSpies = 3 }

  nationalprovinces      = { 107 108 109 110 111 116 117 118 123 124 125 128 129 }
  ownedprovinces         = { 107 108 109 110 111 116 117 118 123 124 125 128 129 }
  controlledprovinces    = { 107 108 109 110 111 116 117 118 123 124 125 128 129 }

  techapps               = { 5050 5080 5170 5190 5800 5110 5180 5660 5310 5020 1010 1100 2280 2290 2420 2540 3490 3550 3560 3600 3610 3010 3070 3130 3410 6050 6010 6020 6030 6040 8010 8020 8390 8150 7420 1900 }

  policy = {
    date              = { year = 0 month = january day = 0 }
    democratic        = 9
    political_left    = 9
    freedom           = 7
    free_market       = 7
    professional_army = 10
    defense_lobby     = 5
    interventionism   = 2
  }
  headofstate            = { type = 9 id = 14001 } # �������� 
  headofgovernment       = { type = 9 id = 14002 } # Լ�� ���˹�ֶ� 
  foreignminister        = { type = 9 id = 14003 } # ������ ���� 
  armamentminister       = { type = 9 id = 14004 } # ������ ������ 
  ministerofsecurity     = { type = 9 id = 14005 } # �����Τ H. ����
  ministerofintelligence = { type = 9 id = 14006 } # �������׵� ��ɪ��-·�� 
  chiefofstaff           = { type = 9 id = 14007 } # ���� ·�� 
  chiefofarmy            = { type = 9 id = 14008 } # ����˹̹ K. ���� 
  chiefofnavy            = { type = 9 id = 14009 } # �ӿ˲� �� �� ���� 
  chiefofair             = { type = 9 id = 14010 } # �ӿ˲� �� �� ���� 

  landunit = {
    id       = { type = 12600 id = 1 }
    name     = "Ų����I�� "
    location = 107
    division = {
      id             = { type = 12600 id = 2 }
      name           = "��1����ʦ "
      type           = motorized
      experience     = 40
    }
  }
  landunit = {
    id       = { type = 12600 id = 11 }
    name     = "Ų����VI�� "
    location = 125
    division = {
      id             = { type = 12600 id = 12 }
      name           = "��6����ʦ "
      type           = motorized
      experience     = 40
    }
  }

  navalunit = {
    id       = { type = 12600 id = 20 }
    name     = "Ų����I���� "
    location = 107
    base     = 107
    division = {
      id             = { type = 12600 id = 21 }
      name           = "��1Ǳͧ��� "
      type           = submarine
      model          = 0
    }
    division = {
      id             = { type = 12600 id = 22 }
      name           = "��2Ǳͧ��� "
      type           = submarine
      model          = 0
    }
  }
  navalunit = {
    id       = { type = 12600 id = 25 }
    name     = "Ų����III���� "
    location = 125
    base     = 125
    division = {
      id             = { type = 12600 id = 26 }
      name           = "�޸��� "
      type           = heavy_cruiser
      model          = 0
      extra1         = naval_fire_controll_l
      extra2         = naval_anti_air_l
      extra3         = none
      brigade_model1 = 0
      brigade_model2 = 1
      brigade_model3 = 0
    }
    division = {
      id             = { type = 12600 id = 30 }
      name           = "����˹�� "
      type           = heavy_cruiser
      model          = 0
      extra1         = naval_fire_controll_l
      extra2         = naval_anti_air_l
      extra3         = none
      brigade_model1 = 0
      brigade_model2 = 1
      brigade_model3 = 0
    }
  }

  landdivision = { dormant = yes id = { type = 12600 id = 31 } name = "�N��������� "  type = garrison model = 2 experience = 20 extra = engineer brigade_model = 2 locked = yes } 
  landdivision = { dormant = yes id = { type = 12600 id = 32 } name = "�N��������� "  type = garrison model = 2 experience = 20 extra = engineer brigade_model = 2 locked = yes } 
  landdivision = { dormant = yes id = { type = 12600 id = 33 } name = "�N��������� "  type = garrison model = 2 experience = 20 extra = engineer brigade_model = 2 locked = yes } 
  landdivision = { dormant = yes id = { type = 12600 id = 34 } name = "�N��������� "  type = garrison model = 2 experience = 20 extra = engineer brigade_model = 2 locked = yes } 
  landdivision = { dormant = yes id = { type = 12600 id = 35 } name = "�N��������� "  type = garrison model = 2 experience = 20 extra = engineer brigade_model = 2 locked = yes } 
  landdivision = { dormant = yes id = { type = 12600 id = 36 } name = "�N��������� "  type = garrison model = 2 experience = 20 extra = engineer brigade_model = 2 locked = yes } 
  landdivision = { dormant = yes id = { type = 12600 id = 37 } name = "�N��������� "  type = garrison model = 2 experience = 20 extra = engineer brigade_model = 2 locked = yes } 
  landdivision = { dormant = yes id = { type = 12600 id = 38 } name = "�N��������� "  type = garrison model = 2 experience = 20 extra = engineer brigade_model = 2 locked = yes } 
  landdivision = { dormant = yes id = { type = 12600 id = 39 } name = "�N��������� "  type = garrison model = 2 experience = 20 extra = engineer brigade_model = 2 locked = yes } 
  landdivision = { dormant = yes id = { type = 12600 id = 40 } name = "�N��������� "  type = garrison model = 2 experience = 20 extra = engineer brigade_model = 2 locked = yes } 
  landdivision = { dormant = yes id = { type = 12600 id = 41 } name = "�N��������� "  type = garrison model = 2 experience = 20 extra = engineer brigade_model = 2 locked = yes } 
}
