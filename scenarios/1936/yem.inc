##############################
# Country definition for YEM #
##############################

country = {
  tag                = YEM
  puppet             = ENG
  control            = ENG
  capital            = 1812 # ����
  manpower           = 50
  research_mod           = 1
  peacetime_ic_mod       = 0.5
  # Resource Reserves
  energy         = 200
  metal          = 200
  rare_materials = 200
  oil            = 200
  supplies       = 200
  money          = 10

  diplomacy = {
    relation = { tag = AST value = 150 }
    relation = { tag = BHU value = 150 }
    relation = { tag = CAN value = 150 }
    relation = { tag = ENG value = 150 }
    relation = { tag = FRA value = 150 }
    relation = { tag = GER value = 1 }
    relation = { tag = IRQ value = 125 }
    relation = { tag = ITA value = 50 }
    relation = { tag = NEP value = 150 }
    relation = { tag = NZL value = 150 }
    relation = { tag = OMN value = 150 }
    relation = { tag = SAF value = 150 }
    relation = { tag = SAU value = 125 }
    relation = { tag = TUR value = 35 }
    relation = { tag = USA value = 100 }
  }

  nationalprovinces      = { 1812 1813 1814 3909 3910 }
  ownedprovinces         = { 1812 3909 3910 }
  controlledprovinces    = { 1812 3909 3910 }

  techapps               = { 1010 1100 7430 }

  policy = {
    date              = { year = 0 month = january day = 0 }
    democratic        = 3
    political_left    = 4
    freedom           = 4
    free_market       = 4
    professional_army = 10
    defense_lobby     = 2
    interventionism   = 1
  }
  headofstate            = { type = 9 id = 93001 } # Ҷ���� ���� ���׵� 
  headofgovernment       = { type = 9 id = 93002 } # Ҷ���� ���� ���׵� 
  foreignminister        = { type = 9 id = 93003 } # Ҷ���� ���� ���׵� 
  armamentminister       = { type = 9 id = 93004 } # �������� ���� ���׵� 
  ministerofsecurity     = { type = 9 id = 93005 } # Ҷ���� ���� ���׵� 
  ministerofintelligence = { type = 9 id = 93006 } # �������� ���� ���׵� 
  chiefofstaff           = { type = 9 id = 93007 } # Ҷ���� ���� ���׵� 
  chiefofarmy            = { type = 9 id = 93008 } # �������� ���� ���׵� 
  chiefofnavy            = { type = 9 id = 93009 } # ���ն� ���� �͵� 
  chiefofair             = { type = 9 id = 93010 } # ���ն� ���� �͵� 

  landunit = {
    id       = { type = 16800 id = 1 }
    name     = "Ҳ�Żʼ�½����1�� "
    location = 1812
    division = {
      id             = { type = 16800 id = 2 }
      name           = "�ʼҽ���ʦ "
      type           = cavalry
      model          = 70
      strength       = 100
    }
  }
}
