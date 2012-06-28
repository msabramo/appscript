/*
 * SEAEMConstants.h
 * /System/Library/CoreServices/System Events.app
 * osaglue 0.5.1
 *
 */

#import <Foundation/Foundation.h>
#import "Appscript/Appscript.h"

/* Types, enumerators, properties */

enum {
    kSEApplePhotoFormat = 'dfph',
    kSEAppleShareFormat = 'dfas',
    kSEF1 = 'F1ky',
    kSEF10 = 'F10k',
    kSEF11 = 'F11k',
    kSEF12 = 'F12k',
    kSEF13 = 'F13k',
    kSEF2 = 'F2ky',
    kSEF3 = 'F3ky',
    kSEF4 = 'F4ky',
    kSEF5 = 'F5ky',
    kSEF6 = 'F6ky',
    kSEF7 = 'F7ky',
    kSEF8 = 'F8ky',
    kSEF9 = 'F9ky',
    kSEHighSierraFormat = 'dfhs',
    kSEISO9660Format = 'df96',
    kSEMSDOSFormat = 'dfms',
    kSEMacOSExtendedFormat = 'dfh+',
    kSEMacOSFormat = 'dfhf',
    kSENFSFormat = 'dfnf',
    kSEProDOSFormat = 'dfpr',
    kSEQuickTakeFormat = 'dfqt',
    kSEUDFFormat = 'dfud',
    kSEUFSFormat = 'dfuf',
    kSEWebDAVFormat = 'dfwd',
    kSEAllWindows = 'allw',
    kSEApplicationResponses = 'rmte',
    kSEApplicationWindows = 'appw',
    kSEAsk = 'ask ',
    kSEAskWhatToDo = 'dhas',
    kSEAudioFormat = 'dfau',
    kSEAutomatic = 'autm',
    kSEBlue = 'blue',
    kSEBottom = 'bott',
    kSECase_ = 'case',
    kSECommand = 'cmdm',
    kSECommandDown = 'Kcmd',
    kSEControl = 'ctlm',
    kSEControlDown = 'Kctl',
    kSECurrent = 'cust',
    kSEDashboard = 'dash',
    kSEDetailed = 'lwdt',
    kSEDiacriticals = 'diac',
    kSEDisableScreenSaver = 'disc',
    kSEDouble_ = 'doub',
    kSEExpansion = 'expa',
    kSEGenie = 'geni',
    kSEGold = 'gold',
    kSEGraphite = 'grft',
    kSEGreen = 'gren',
    kSEHalf = 'half',
    kSEHyphens = 'hyph',
    kSEIgnore = 'dhig',
    kSEItemsAdded = 'fget',
    kSEItemsRemoved = 'flos',
    kSEJumpToHere = 'tohr',
    kSEJumpToNextPage = 'nxpg',
    kSELeft = 'left',
    kSELeftCommand = 'Lcmd',
    kSELeftControl = 'Lctl',
    kSELeftOption = 'Lopt',
    kSELeftShift = 'Lsht',
    kSELight = 'lite',
    kSEMedium = 'medi',
    kSENo = 'no  ',
    kSENone = 'none',
    kSENormal = 'norm',
    kSENumericStrings = 'nume',
    kSEOpenApplication = 'dhap',
    kSEOption = 'optm',
    kSEOptionDown = 'Kopt',
    kSEOrange = 'orng',
    kSEPunctuation = 'punc',
    kSEPurple = 'prpl',
    kSERed = 'red ',
    kSERight = 'righ',
    kSERightCommand = 'Rcmd',
    kSERightControl = 'Rctl',
    kSERightOption = 'Ropt',
    kSERightShift = 'Rsht',
    kSERunAScript = 'dhrs',
    kSEScale = 'scal',
    kSEScreen = 'fits',
    kSESecondaryFunctionKey = 'SFky',
    kSEShift = 'shtm',
    kSEShiftDown = 'Ksft',
    kSEShowDesktop = 'desk',
    kSEShowSpaces = 'spcs',
    kSESilver = 'slvr',
    kSESleepDisplay = 'diss',
    kSESlideShow = 'pmss',
    kSEStandard = 'stnd',
    kSEStartScreenSaver = 'star',
    kSEStrong = 'strg',
    kSETogether = 'tgth',
    kSETogetherAtTopAndBottom = 'tgtb',
    kSETopAndBottom = 'tpbt',
    kSEUnknownFormat = 'df$$',
    kSEWhitespace = 'whit',
    kSEWindowClosed = 'fclo',
    kSEWindowMoved = 'fsiz',
    kSEWindowOpened = 'fopn',
    kSEYes = 'yes ',
    kSEApril = 'apr ',
    kSEAugust = 'aug ',
    kSECDAndDVDPreferences = 'dhas',
    kSECDAndDVDPreferencesObject = 'dhao',
    kSEClassic = 'clsc',
    kSEClassicDomain = 'fldc',
    kSEClassicDomainObject = 'domc',
    kSEDecember = 'dec ',
    kSEEPSPicture = 'EPS ',
    kSEFebruary = 'feb ',
    kSEFolderActionScriptsFolder = 'fasf',
    kSEFriday = 'fri ',
    kSEGIFPicture = 'GIFf',
    kSEJPEGPicture = 'JPEG',
    kSEJanuary = 'jan ',
    kSEJuly = 'jul ',
    kSEJune = 'jun ',
    kSEMACAddress = 'maca',
    kSEMarch = 'mar ',
    kSEMay = 'may ',
    kSEMonday = 'mon ',
    kSENovember = 'nov ',
    kSEOctober = 'oct ',
    kSEPICTPicture = 'PICT',
    kSEPOSIXPath = 'posx',
    kSEQuickTimeData = 'qtfd',
    kSEQuickTimeFile = 'qtff',
    kSERGB16Color = 'tr16',
    kSERGB96Color = 'tr96',
    kSERGBColor = 'cRGB',
    kSESaturday = 'sat ',
    kSESeptember = 'sep ',
    kSESunday = 'sun ',
    kSETIFFPicture = 'TIFF',
    kSEThursday = 'thu ',
    kSETuesday = 'tue ',
    kSEUIElement = 'uiel',
    kSEUIElementsEnabled = 'uien',
    kSEURL = 'url ',
    kSEWednesday = 'wed ',
    kSEXMLAttribute = 'xmla',
    kSEXMLData = 'xmld',
    kSEXMLElement = 'xmle',
    kSEXMLFile = 'xmlf',
    kSEAcceptsHighLevelEvents = 'isab',
    kSEAcceptsRemoteEvents = 'revt',
    kSEAccountName = 'user',
    kSEAction = 'actT',
    kSEActive = 'acti',
    kSEActivity = 'epsa',
    kSEAlias = 'alis',
    kSEAllWindowsShortcut = 'epaw',
    kSEAnimate = 'dani',
    kSEAnnotation = 'anno',
    kSEAnything = '****',
    kSEAppearance = 'appe',
    kSEAppearancePreferences = 'aprp',
    kSEAppearancePreferencesObject = 'apro',
    kSEAppleMenuFolder = 'amnu',
    kSEApplication = 'capp',
    kSEApplicationBindings = 'spcs',
    kSEApplicationBundleID = 'bund',
    kSEApplicationFile = 'appf',
    kSEApplicationProcess = 'pcap',
    kSEApplicationSignature = 'sign',
    kSEApplicationSupportFolder = 'asup',
    kSEApplicationURL = 'aprl',
    kSEApplicationWindowsShortcut = 'eppw',
    kSEApplicationsFolder = 'apps',
    kSEArchitecture = 'arch',
    kSEArrowKeyModifiers = 'spam',
    kSEAttachment = 'atts',
    kSEAttribute = 'attr',
    kSEAttributeRun = 'catr',
    kSEAudioChannelCount = 'acha',
    kSEAudioCharacteristic = 'audi',
    kSEAudioData = 'audd',
    kSEAudioFile = 'audf',
    kSEAudioSampleRate = 'asra',
    kSEAudioSampleSize = 'assz',
    kSEAutoPlay = 'autp',
    kSEAutoPresent = 'apre',
    kSEAutoQuitWhenDone = 'aqui',
    kSEAutohide = 'dahd',
    kSEAutomaticLogin = 'aulg',
    kSEBackgroundOnly = 'bkgo',
    kSEBest = 'best',
    kSEBlankCD = 'dhbc',
    kSEBlankDVD = 'dhbd',
    kSEBoolean = 'bool',
    kSEBottomLeftScreenCorner = 'epbl',
    kSEBottomRightScreenCorner = 'epbr',
    kSEBoundingRectangle = 'qdrt',
    kSEBounds = 'pbnd',
    kSEBrowser = 'broW',
    kSEBundleIdentifier = 'bnid',
    kSEBusyIndicator = 'busi',
    kSEBusyStatus = 'busy',
    kSEButton = 'butT',
    kSECapacity = 'capa',
    kSECentimeters = 'cmtr',
    kSEChangeInterval = 'cinT',
    kSECharacter = 'cha ',
    kSECheckbox = 'chbx',
    kSEClassInfo = 'gcli',
    kSEClass_ = 'pcls',
    kSECloseable = 'hclb',
    kSECollating = 'lwcl',
    kSEColor = 'colr',
    kSEColorTable = 'clrt',
    kSEColorWell = 'colW',
    kSEColumn = 'ccol',
    kSEComboBox = 'comB',
    kSEConfiguration = 'conF',
    kSEConnected = 'conn',
    kSEContainer = 'ctnr',
    kSEContents = 'pcnt',
    kSEControlPanelsFolder = 'ctrl',
    kSEControlStripModulesFolder = 'sdev',
    kSECopies = 'lwcp',
    kSECreationDate = 'ascd',
    kSECreationTime = 'mdcr',
    kSECreatorType = 'fcrt',
    kSECubicCentimeters = 'ccmt',
    kSECubicFeet = 'cfet',
    kSECubicInches = 'cuin',
    kSECubicMeters = 'cmet',
    kSECubicYards = 'cyrd',
    kSECurrentConfiguration = 'cnfg',
    kSECurrentDesktop = 'curd',
    kSECurrentLocation = 'locc',
    kSECurrentUser = 'curu',
    kSECustomApplication = 'dhca',
    kSECustomScript = 'dhcs',
    kSEDashStyle = 'tdas',
    kSEDashboardShortcut = 'epdb',
    kSEData = 'rdat',
    kSEDataFormat = 'tdfr',
    kSEDataRate = 'ddra',
    kSEDataSize = 'dsiz',
    kSEDate = 'ldt ',
    kSEDecimalStruct = 'decm',
    kSEDefaultApplication = 'asda',
    kSEDegreesCelsius = 'degc',
    kSEDegreesFahrenheit = 'degf',
    kSEDegreesKelvin = 'degk',
    kSEDescription_ = 'desc',
    kSEDeskAccessoryFile = 'dafi',
    kSEDeskAccessoryProcess = 'pcda',
    kSEDesktop = 'dskp',
    kSEDesktopFolder = 'desk',
    kSEDesktopPicturesFolder = 'dtp$',
    kSEDimensions = 'pdim',
    kSEDisk = 'cdis',
    kSEDiskItem = 'ditm',
    kSEDisplayName = 'dnaM',
    kSEDisplayedName = 'dnam',
    kSEDockPreferences = 'dpas',
    kSEDockPreferencesObject = 'dpao',
    kSEDockSize = 'dsze',
    kSEDocument = 'docu',
    kSEDocumentsFolder = 'docs',
    kSEDomain = 'doma',
    kSEDoubleClickMinimizes = 'mndc',
    kSEDoubleInteger = 'comp',
    kSEDownloadsFolder = 'down',
    kSEDrawer = 'draA',
    kSEDuplex = 'dupl',
    kSEDuration = 'durn',
    kSEEjectable = 'isej',
    kSEElementInfo = 'elin',
    kSEEnabled = 'enaB',
    kSEEncodedString = 'encs',
    kSEEndingPage = 'lwlp',
    kSEEntireContents = 'ects',
    kSEEnumerator = 'enum',
    kSEErrorHandling = 'lweh',
    kSEEventInfo = 'evin',
    kSEExposePreferences = 'epas',
    kSEExposePreferencesObject = 'epao',
    kSEExtendedFloat = 'exte',
    kSEExtensionsFolder = 'extz',
    kSEFavoritesFolder = 'favs',
    kSEFaxNumber = 'faxn',
    kSEFeet = 'feet',
    kSEFile = 'file',
    kSEFileName = 'atfn',
    kSEFilePackage = 'cpkg',
    kSEFileRef = 'fsrf',
    kSEFileSpecification = 'fss ',
    kSEFileType = 'asty',
    kSEFileURL = 'furl',
    kSEFixed = 'fixd',
    kSEFixedPoint = 'fpnt',
    kSEFixedRectangle = 'frct',
    kSEFloat128bit = 'ldbl',
    kSEFloat_ = 'doub',
    kSEFloating = 'isfl',
    kSEFocused = 'focu',
    kSEFolder = 'cfol',
    kSEFolderAction = 'foac',
    kSEFolderActionsEnabled = 'faen',
    kSEFont = 'font',
    kSEFontSmoothingLimit = 'ftsm',
    kSEFontSmoothingStyle = 'ftss',
    kSEFontsFolder = 'font',
    kSEFormat = 'dfmt',
    kSEFreeSpace = 'frsp',
    kSEFrontmost = 'pisf',
    kSEFullName = 'fnam',
    kSEFullText = 'anot',
    kSEFunctionKey = 'epsk',
    kSEFunctionKeyModifiers = 'epsy',
    kSEGallons = 'galn',
    kSEGrams = 'gram',
    kSEGraphicText = 'cgtx',
    kSEGroup = 'sgrp',
    kSEGrowArea = 'grow',
    kSEHasScriptingTerminology = 'hscr',
    kSEHelp_ = 'help',
    kSEHidden = 'hidn',
    kSEHighQuality = 'hqua',
    kSEHighlightColor = 'hico',
    kSEHomeDirectory = 'home',
    kSEHomeFolder = 'cusr',
    kSEHref = 'href',
    kSEId_ = 'ID  ',
    kSEIgnorePrivileges = 'igpr',
    kSEImage = 'imaA',
    kSEInches = 'inch',
    kSEIncrementor = 'incr',
    kSEIndex = 'pidx',
    kSEInsertionAction = 'dhat',
    kSEInsertionPreference = 'dhip',
    kSEInteger = 'long',
    kSEInterface = 'intf',
    kSEInternationalText = 'itxt',
    kSEInternationalWritingCode = 'intl',
    kSEItem = 'cobj',
    kSEKernelProcessID = 'kpid',
    kSEKeyModifiers = 'spky',
    kSEKilograms = 'kgrm',
    kSEKilometers = 'kmtr',
    kSEKind = 'kind',
    kSELauncherItemsFolder = 'laun',
    kSELibraryFolder = 'dlib',
    kSEList = 'list',
    kSELiters = 'litr',
    kSELocalDomain = 'fldl',
    kSELocalDomainObject = 'doml',
    kSELocalVolume = 'isrv',
    kSELocation = 'loca',
    kSELocationReference = 'insl',
    kSELogOutWhenInactive = 'aclk',
    kSELogOutWhenInactiveInterval = 'acto',
    kSELoginItem = 'logi',
    kSELongFixed = 'lfxd',
    kSELongFixedPoint = 'lfpt',
    kSELongFixedRectangle = 'lfrc',
    kSELongPoint = 'lpnt',
    kSELongRectangle = 'lrct',
    kSELooping = 'loop',
    kSEMachPort = 'port',
    kSEMachine = 'mach',
    kSEMachineLocation = 'mLoc',
    kSEMagnification = 'dmag',
    kSEMagnificationSize = 'dmsz',
    kSEMaximumValue = 'maxV',
    kSEMenu = 'menE',
    kSEMenuBar = 'mbar',
    kSEMenuBarItem = 'mbri',
    kSEMenuButton = 'menB',
    kSEMenuItem = 'menI',
    kSEMeters = 'metr',
    kSEMiles = 'mile',
    kSEMiniaturizable = 'ismn',
    kSEMiniaturized = 'pmnd',
    kSEMinimizeEffect = 'deff',
    kSEMinimumValue = 'minW',
    kSEMissingValue = 'msng',
    kSEModal = 'pmod',
    kSEModificationDate = 'asmo',
    kSEModificationTime = 'mdtm',
    kSEModified = 'imod',
    kSEModifiers = 'epso',
    kSEMouseButton = 'epsb',
    kSEMouseButtonModifiers = 'epsm',
    kSEMovieData = 'movd',
    kSEMovieFile = 'movf',
    kSEMoviesFolder = 'mdoc',
    kSEMtu = 'mtu ',
    kSEMusicCD = 'dhmc',
    kSEMusicFolder = '%doc',
    kSEName = 'pnam',
    kSENameExtension = 'extn',
    kSENaturalDimensions = 'ndim',
    kSENetworkDomain = 'fldn',
    kSENetworkDomainObject = 'domn',
    kSENetworkPreferences = 'netp',
    kSENetworkPreferencesObject = 'neto',
    kSENull = 'null',
    kSENumbersKeyModifiers = 'spnm',
    kSEOrientation = 'orie',
    kSEOunces = 'ozs ',
    kSEOutline = 'outl',
    kSEPackageFolder = 'pkgf',
    kSEPagesAcross = 'lwla',
    kSEPagesDown = 'lwld',
    kSEParagraph = 'cpar',
    kSEParameterInfo = 'pmin',
    kSEPartitionSpaceUsed = 'pusd',
    kSEPath = 'ppth',
    kSEPhysicalSize = 'phys',
    kSEPicture = 'picP',
    kSEPictureCD = 'dhpc',
    kSEPicturePath = 'picp',
    kSEPictureRotation = 'chnG',
    kSEPicturesFolder = 'pdoc',
    kSEPixelMapRecord = 'tpmm',
    kSEPoint = 'QDpt',
    kSEPopUpButton = 'popB',
    kSEPosition = 'posn',
    kSEPounds = 'lbs ',
    kSEPreferencesFolder = 'pref',
    kSEPreferredRate = 'prfr',
    kSEPreferredVolume = 'prfv',
    kSEPresentationMode = 'prmd',
    kSEPresentationSize = 'prsz',
    kSEPreviewDuration = 'pvwd',
    kSEPreviewTime = 'pvwt',
    kSEPrintSettings = 'pset',
    kSEProcess = 'prcs',
    kSEProcessSerialNumber = 'psn ',
    kSEProductVersion = 'ver2',
    kSEProgressIndicator = 'proI',
    kSEProperties = 'pALL',
    kSEProperty = 'prop',
    kSEPropertyInfo = 'pinf',
    kSEPropertyListFile = 'plif',
    kSEPropertyListItem = 'plii',
    kSEPublicFolder = 'pubb',
    kSEQuarts = 'qrts',
    kSEQuitDelay = 'qdel',
    kSERadioButton = 'radB',
    kSERadioGroup = 'rgrp',
    kSERandomOrder = 'ranD',
    kSERecentApplicationsLimit = 'rapl',
    kSERecentDocumentsLimit = 'rdcl',
    kSERecentServersLimit = 'rsvl',
    kSERecord = 'reco',
    kSEReference = 'obj ',
    kSERelevanceIndicator = 'reli',
    kSERequestedPrintTime = 'lwqt',
    kSERequirePasswordToUnlock = 'pwul',
    kSERequirePasswordToWake = 'pwwk',
    kSEResizable = 'prsz',
    kSERole = 'role',
    kSERotation = 'trot',
    kSERow = 'crow',
    kSEScreenCorner = 'epsc',
    kSEScript = 'scpt',
    kSEScriptMenuEnabled = 'scmn',
    kSEScriptingAdditionsFolder = '$scr',
    kSEScriptsFolder = 'scr$',
    kSEScrollArea = 'scra',
    kSEScrollArrowPlacement = 'sclp',
    kSEScrollBar = 'scrb',
    kSEScrollBarAction = 'sclb',
    kSESecureVirtualMemory = 'scvm',
    kSESecurityPreferences = 'secp',
    kSESecurityPreferencesObject = 'seco',
    kSESelected = 'selE',
    kSEServer = 'srvr',
    kSEService = 'svce',
    kSESettable = 'stbl',
    kSESharedDocumentsFolder = 'sdat',
    kSESheet = 'sheE',
    kSEShortFloat = 'sing',
    kSEShortInteger = 'shor',
    kSEShortName = 'cfbn',
    kSEShortVersion = 'assv',
    kSEShortcut = 'epst',
    kSEShowDesktopShortcut = 'epde',
    kSEShowSpacesShortcut = 'spcs',
    kSEShutdownFolder = 'shdf',
    kSESitesFolder = 'site',
    kSESize = 'ptsz',
    kSESlider = 'sliI',
    kSESmoothScrolling = 'scls',
    kSESpacesColumns = 'spcl',
    kSESpacesEnabled = 'spen',
    kSESpacesPreferences = 'essp',
    kSESpacesPreferencesObject = 'spsp',
    kSESpacesRows = 'sprw',
    kSESpacesShortcut = 'spst',
    kSESpeakableItemsFolder = 'spki',
    kSESpeed = 'sped',
    kSESplitter = 'splr',
    kSESplitterGroup = 'splg',
    kSESquareFeet = 'sqft',
    kSESquareKilometers = 'sqkm',
    kSESquareMeters = 'sqrm',
    kSESquareMiles = 'sqmi',
    kSESquareYards = 'sqyd',
    kSEStartTime = 'offs',
    kSEStartingPage = 'lwfp',
    kSEStartup = 'istd',
    kSEStartupDisk = 'sdsk',
    kSEStartupItemsFolder = 'empz',
    kSEStaticText = 'sttx',
    kSEStationery = 'pspd',
    kSEStoredStream = 'isss',
    kSEString = 'TEXT',
    kSEStyledClipboardText = 'styl',
    kSEStyledText = 'STXT',
    kSESubrole = 'sbrl',
    kSESuiteInfo = 'suin',
    kSESystemDomain = 'flds',
    kSESystemDomainObject = 'doms',
    kSESystemFolder = 'macs',
    kSETabGroup = 'tabg',
    kSETable = 'tabB',
    kSETargetPrinter = 'trpr',
    kSETemporaryItemsFolder = 'temp',
    kSEText = 'ctxt',
    kSETextArea = 'txta',
    kSETextField = 'txtf',
    kSETextStyleInfo = 'tsty',
    kSETimeScale = 'tmsc',
    kSETitle = 'titl',
    kSETitled = 'ptit',
    kSEToolBar = 'tbar',
    kSETopLeftScreenCorner = 'eptl',
    kSETopRightScreenCorner = 'eptr',
    kSETotalPartitionSize = 'appt',
    kSETrack = 'trak',
    kSETrash = 'trsh',
    kSEType = 'ptyp',
    kSETypeClass = 'type',
    kSETypeIdentifier = 'utid',
    kSEUnicodeText = 'utxt',
    kSEUnixId = 'idux',
    kSEUnsignedInteger = 'magn',
    kSEUser = 'uacc',
    kSEUserDomain = 'fldu',
    kSEUserDomainObject = 'domu',
    kSEUtf16Text = 'ut16',
    kSEUtf8Text = 'utf8',
    kSEUtilitiesFolder = 'uti$',
    kSEValue = 'valL',
    kSEValueIndicator = 'vali',
    kSEVersion = 'vers',
    kSEVersion_ = 'vers',
    kSEVideoDVD = 'dhvd',
    kSEVideoDepth = 'vcdp',
    kSEVisible = 'pvis',
    kSEVisualCharacteristic = 'visu',
    kSEVolume = 'volu',
    kSEWindow = 'cwin',
    kSEWord = 'cwor',
    kSEWorkflowsFolder = 'flow',
    kSEWritingCode = 'psct',
    kSEYards = 'yard',
    kSEZone = 'zone',
    kSEZoomable = 'iszm',
    kSEZoomed = 'pzum',
};

enum {
    eSECDAndDVDPreferencesObject = 'dhao',
    eSEClassicDomainObjects = 'domc',
    eSEQuickTimeData = 'qtfd',
    eSEQuickTimeFiles = 'qtff',
    eSEUIElements = 'uiel',
    eSEXMLAttributes = 'xmla',
    eSEXMLData = 'xmld',
    eSEXMLElements = 'xmle',
    eSEXMLFiles = 'xmlf',
    eSEActions = 'actT',
    eSEAliases = 'alis',
    eSEAnnotation = 'anno',
    eSEAppearancePreferencesObject = 'apro',
    eSEApplicationProcesses = 'pcap',
    eSEApplications = 'capp',
    eSEAttachment = 'atts',
    eSEAttributeRuns = 'catr',
    eSEAttributes = 'attr',
    eSEAudioData = 'audd',
    eSEAudioFiles = 'audf',
    eSEBrowsers = 'broW',
    eSEBusyIndicators = 'busi',
    eSEButtons = 'butT',
    eSECharacters = 'cha ',
    eSECheckboxes = 'chbx',
    eSEColorWells = 'colW',
    eSEColors = 'colr',
    eSEColumns = 'ccol',
    eSEComboBoxes = 'comB',
    eSEConfigurations = 'conF',
    eSEDeskAccessoryProcesses = 'pcda',
    eSEDesktops = 'dskp',
    eSEDiskItems = 'ditm',
    eSEDisks = 'cdis',
    eSEDockPreferencesObject = 'dpao',
    eSEDocuments = 'docu',
    eSEDomains = 'doma',
    eSEDrawers = 'draA',
    eSEExposePreferencesObject = 'epao',
    eSEFilePackages = 'cpkg',
    eSEFiles = 'file',
    eSEFolderActions = 'foac',
    eSEFolders = 'cfol',
    eSEGroups = 'sgrp',
    eSEGrowAreas = 'grow',
    eSEImages = 'imaA',
    eSEIncrementors = 'incr',
    eSEInsertionPreference = 'dhip',
    eSEInterfaces = 'intf',
    eSEItems = 'cobj',
    eSELists = 'list',
    eSELocalDomainObjects = 'doml',
    eSELocations = 'loca',
    eSELoginItems = 'logi',
    eSEMenuBarItems = 'mbri',
    eSEMenuBars = 'mbar',
    eSEMenuButtons = 'menB',
    eSEMenuItems = 'menI',
    eSEMenus = 'menE',
    eSEMovieData = 'movd',
    eSEMovieFiles = 'movf',
    eSENetworkDomainObjects = 'domn',
    eSENetworkPreferencesObject = 'neto',
    eSEOutlines = 'outl',
    eSEParagraphs = 'cpar',
    eSEPopUpButtons = 'popB',
    eSEPrintSettings = 'pset',
    eSEProcesses = 'prcs',
    eSEProgressIndicators = 'proI',
    eSEPropertyListFiles = 'plif',
    eSEPropertyListItems = 'plii',
    eSERadioButtons = 'radB',
    eSERadioGroups = 'rgrp',
    eSERelevanceIndicators = 'reli',
    eSERows = 'crow',
    eSEScreenCorner = 'epsc',
    eSEScripts = 'scpt',
    eSEScrollAreas = 'scra',
    eSEScrollBars = 'scrb',
    eSESecurityPreferencesObject = 'seco',
    eSEServices = 'svce',
    eSESheets = 'sheE',
    eSEShortcut = 'epst',
    eSESliders = 'sliI',
    eSESpacesPreferencesObject = 'spsp',
    eSESpacesShortcut = 'spst',
    eSESplitterGroups = 'splg',
    eSESplitters = 'splr',
    eSEStaticTexts = 'sttx',
    eSESystemDomainObjects = 'doms',
    eSETabGroups = 'tabg',
    eSETables = 'tabB',
    eSEText = 'ctxt',
    eSETextAreas = 'txta',
    eSETextFields = 'txtf',
    eSEToolBars = 'tbar',
    eSETracks = 'trak',
    eSEUserDomainObjects = 'domu',
    eSEUsers = 'uacc',
    eSEValueIndicators = 'vali',
    eSEWindows = 'cwin',
    eSEWords = 'cwor',
    pSECDAndDVDPreferences = 'dhas',
    pSEClassic = 'clsc',
    pSEClassicDomain = 'fldc',
    pSEFolderActionScriptsFolder = 'fasf',
    pSEMACAddress = 'maca',
    pSEPOSIXPath = 'posx',
    pSEUIElementsEnabled = 'uien',
    pSEURL = 'url ',
    pSEAcceptsHighLevelEvents = 'isab',
    pSEAcceptsRemoteEvents = 'revt',
    pSEAccountName = 'user',
    pSEActive = 'acti',
    pSEActivity = 'epsa',
    pSEAllWindowsShortcut = 'epaw',
    pSEAnimate = 'dani',
    pSEAppearance = 'appe',
    pSEAppearancePreferences = 'aprp',
    pSEAppleMenuFolder = 'amnu',
    pSEApplicationBindings = 'spcs',
    pSEApplicationFile = 'appf',
    pSEApplicationSupportFolder = 'asup',
    pSEApplicationWindowsShortcut = 'eppw',
    pSEApplicationsFolder = 'apps',
    pSEArchitecture = 'arch',
    pSEArrowKeyModifiers = 'spam',
    pSEAudioChannelCount = 'acha',
    pSEAudioCharacteristic = 'audi',
    pSEAudioSampleRate = 'asra',
    pSEAudioSampleSize = 'assz',
    pSEAutoPlay = 'autp',
    pSEAutoPresent = 'apre',
    pSEAutoQuitWhenDone = 'aqui',
    pSEAutohide = 'dahd',
    pSEAutomatic = 'auto',
    pSEAutomaticLogin = 'aulg',
    pSEBackgroundOnly = 'bkgo',
    pSEBlankCD = 'dhbc',
    pSEBlankDVD = 'dhbd',
    pSEBottomLeftScreenCorner = 'epbl',
    pSEBottomRightScreenCorner = 'epbr',
    pSEBounds = 'pbnd',
    pSEBundleIdentifier = 'bnid',
    pSEBusyStatus = 'busy',
    pSECapacity = 'capa',
    pSEChangeInterval = 'cinT',
    pSEClass_ = 'pcls',
    pSECloseable = 'hclb',
    pSECollating = 'lwcl',
    pSEColor = 'colr',
    pSEConnected = 'conn',
    pSEContainer = 'ctnr',
    pSEContents = 'pcnt',
    pSEControlPanelsFolder = 'ctrl',
    pSEControlStripModulesFolder = 'sdev',
    pSECopies = 'lwcp',
    pSECreationDate = 'ascd',
    pSECreationTime = 'mdcr',
    pSECreatorType = 'fcrt',
    pSECurrentConfiguration = 'cnfg',
    pSECurrentDesktop = 'curd',
    pSECurrentLocation = 'locc',
    pSECurrentUser = 'curu',
    pSECustomApplication = 'dhca',
    pSECustomScript = 'dhcs',
    pSEDashboardShortcut = 'epdb',
    pSEDataFormat = 'tdfr',
    pSEDataRate = 'ddra',
    pSEDataSize = 'dsiz',
    pSEDefaultApplication = 'asda',
    pSEDescription_ = 'desc',
    pSEDeskAccessoryFile = 'dafi',
    pSEDesktopFolder = 'desk',
    pSEDesktopPicturesFolder = 'dtp$',
    pSEDimensions = 'pdim',
    pSEDisplayName = 'dnaM',
    pSEDisplayedName = 'dnam',
    pSEDockPreferences = 'dpas',
    pSEDockSize = 'dsze',
    pSEDocument = 'docu',
    pSEDocumentsFolder = 'docs',
    pSEDoubleClickMinimizes = 'mndc',
    pSEDownloadsFolder = 'down',
    pSEDuplex = 'dupl',
    pSEDuration = 'durn',
    pSEEjectable = 'isej',
    pSEEnabled = 'enaB',
    pSEEndingPage = 'lwlp',
    pSEEntireContents = 'ects',
    pSEErrorHandling = 'lweh',
    pSEExposePreferences = 'epas',
    pSEExtensionsFolder = 'extz',
    pSEFavoritesFolder = 'favs',
    pSEFaxNumber = 'faxn',
    pSEFile = 'file',
    pSEFileName = 'atfn',
    pSEFileType = 'asty',
    pSEFloating = 'isfl',
    pSEFocused = 'focu',
    pSEFolderActionsEnabled = 'faen',
    pSEFont = 'font',
    pSEFontSmoothingLimit = 'ftsm',
    pSEFontSmoothingStyle = 'ftss',
    pSEFontsFolder = 'font',
    pSEFormat = 'dfmt',
    pSEFreeSpace = 'frsp',
    pSEFrontmost = 'pisf',
    pSEFullName = 'fnam',
    pSEFullText = 'anot',
    pSEFunctionKey = 'epsk',
    pSEFunctionKeyModifiers = 'epsy',
    pSEHasScriptingTerminology = 'hscr',
    pSEHelp_ = 'help',
    pSEHidden = 'hidn',
    pSEHighQuality = 'hqua',
    pSEHighlightColor = 'hico',
    pSEHomeDirectory = 'home',
    pSEHomeFolder = 'cusr',
    pSEHref = 'href',
    pSEId_ = 'ID  ',
    pSEIgnorePrivileges = 'igpr',
    pSEIndex = 'pidx',
    pSEInsertionAction = 'dhat',
    pSEInterface = 'intf',
    pSEKeyModifiers = 'spky',
    pSEKind = 'kind',
    pSELauncherItemsFolder = 'laun',
    pSELibraryFolder = 'dlib',
    pSELocalDomain = 'fldl',
    pSELocalVolume = 'isrv',
    pSELocation = 'dplo',
    pSELogOutWhenInactive = 'aclk',
    pSELogOutWhenInactiveInterval = 'acto',
    pSELooping = 'loop',
    pSEMagnification = 'dmag',
    pSEMagnificationSize = 'dmsz',
    pSEMaximumValue = 'maxV',
    pSEMiniaturizable = 'ismn',
    pSEMiniaturized = 'pmnd',
    pSEMinimizeEffect = 'deff',
    pSEMinimumValue = 'minW',
    pSEModal = 'pmod',
    pSEModificationDate = 'asmo',
    pSEModificationTime = 'mdtm',
    pSEModified = 'imod',
    pSEModifiers = 'epso',
    pSEMouseButton = 'epsb',
    pSEMouseButtonModifiers = 'epsm',
    pSEMoviesFolder = 'mdoc',
    pSEMtu = 'mtu ',
    pSEMusicCD = 'dhmc',
    pSEMusicFolder = '%doc',
    pSEName = 'pnam',
    pSENameExtension = 'extn',
    pSENaturalDimensions = 'ndim',
    pSENetworkDomain = 'fldn',
    pSENetworkPreferences = 'netp',
    pSENumbersKeyModifiers = 'spnm',
    pSEOrientation = 'orie',
    pSEPackageFolder = 'pkgf',
    pSEPagesAcross = 'lwla',
    pSEPagesDown = 'lwld',
    pSEPartitionSpaceUsed = 'pusd',
    pSEPath = 'ppth',
    pSEPhysicalSize = 'phys',
    pSEPicture = 'picP',
    pSEPictureCD = 'dhpc',
    pSEPicturePath = 'picp',
    pSEPictureRotation = 'chnG',
    pSEPicturesFolder = 'pdoc',
    pSEPosition = 'posn',
    pSEPreferencesFolder = 'pref',
    pSEPreferredRate = 'prfr',
    pSEPreferredVolume = 'prfv',
    pSEPresentationMode = 'prmd',
    pSEPresentationSize = 'prsz',
    pSEPreviewDuration = 'pvwd',
    pSEPreviewTime = 'pvwt',
    pSEProductVersion = 'ver2',
    pSEProperties = 'pALL',
    pSEPublicFolder = 'pubb',
    pSEQuitDelay = 'qdel',
    pSERandomOrder = 'ranD',
    pSERecentApplicationsLimit = 'rapl',
    pSERecentDocumentsLimit = 'rdcl',
    pSERecentServersLimit = 'rsvl',
    pSERequestedPrintTime = 'lwqt',
    pSERequirePasswordToUnlock = 'pwul',
    pSERequirePasswordToWake = 'pwwk',
    pSEResizable = 'prsz',
    pSERole = 'role',
    pSEScriptMenuEnabled = 'scmn',
    pSEScriptingAdditionsFolder = '$scr',
    pSEScriptsFolder = 'scr$',
    pSEScrollArrowPlacement = 'sclp',
    pSEScrollBarAction = 'sclb',
    pSESecureVirtualMemory = 'scvm',
    pSESecurityPreferences = 'secp',
    pSESelected = 'selE',
    pSEServer = 'srvr',
    pSESettable = 'stbl',
    pSESharedDocumentsFolder = 'sdat',
    pSEShortName = 'cfbn',
    pSEShortVersion = 'assv',
    pSEShowDesktopShortcut = 'epde',
    pSEShowSpacesShortcut = 'spcs',
    pSEShutdownFolder = 'shdf',
    pSESitesFolder = 'site',
    pSESize = 'ptsz',
    pSESmoothScrolling = 'scls',
    pSESpacesColumns = 'spcl',
    pSESpacesEnabled = 'spen',
    pSESpacesPreferences = 'essp',
    pSESpacesRows = 'sprw',
    pSESpeakableItemsFolder = 'spki',
    pSESpeed = 'sped',
    pSEStartTime = 'offs',
    pSEStartingPage = 'lwfp',
    pSEStartup = 'istd',
    pSEStartupDisk = 'sdsk',
    pSEStartupItemsFolder = 'empz',
    pSEStationery = 'pspd',
    pSEStoredStream = 'isss',
    pSESubrole = 'sbrl',
    pSESystemDomain = 'flds',
    pSESystemFolder = 'macs',
    pSETargetPrinter = 'trpr',
    pSETemporaryItemsFolder = 'temp',
    pSETimeScale = 'tmsc',
    pSETitle = 'titl',
    pSETitled = 'ptit',
    pSETopLeftScreenCorner = 'eptl',
    pSETopRightScreenCorner = 'eptr',
    pSETotalPartitionSize = 'appt',
    pSETrash = 'trsh',
    pSEType = 'ptyp',
    pSETypeClass = 'type',
    pSETypeIdentifier = 'utid',
    pSEUnixId = 'idux',
    pSEUserDomain = 'fldu',
    pSEUtilitiesFolder = 'uti$',
    pSEValue = 'valL',
    pSEVersion_ = 'vers',
    pSEVideoDVD = 'dhvd',
    pSEVideoDepth = 'vcdp',
    pSEVisible = 'pvis',
    pSEVisualCharacteristic = 'visu',
    pSEVolume = 'volu',
    pSEWorkflowsFolder = 'flow',
    pSEZone = 'zone',
    pSEZoomable = 'iszm',
    pSEZoomed = 'pzum',
};


/* Events */

enum {
    ecSEAbortTransaction_ = 'misc',
    eiSEAbortTransaction_ = 'ttrm',
};

enum {
    ecSEActivate = 'misc',
    eiSEActivate = 'actv',
};

enum {
    ecSEAttachActionTo = 'faco',
    eiSEAttachActionTo = 'atfa',
    epSEUsing = 'faal',
};

enum {
    ecSEAttachedScripts = 'faco',
    eiSEAttachedScripts = 'lact',
};

enum {
    ecSEBeginTransaction_ = 'misc',
    eiSEBeginTransaction_ = 'begi',
};

enum {
    ecSECancel = 'prcs',
    eiSECancel = 'cncl',
};

enum {
    ecSEClick = 'prcs',
    eiSEClick = 'clic',
    epSEAt = 'insh',
};

enum {
    ecSEClose = 'core',
    eiSEClose = 'clos',
    epSESaving = 'savo',
    epSESavingIn = 'kfil',
};

enum {
    ecSEConfirm = 'prcs',
    eiSEConfirm = 'cnfm',
};

enum {
    ecSEConnect = 'netz',
    eiSEConnect = 'conn',
};

enum {
    ecSECount = 'core',
    eiSECount = 'cnte',
    epSEEach = 'kocl',
};

enum {
    ecSEDecrement = 'prcs',
    eiSEDecrement = 'decr',
};

enum {
    ecSEDelete = 'core',
    eiSEDelete = 'delo',
};

enum {
    ecSEDisconnect = 'netz',
    eiSEDisconnect = 'dcon',
};

enum {
    ecSEDoFolderAction = 'faco',
    eiSEDoFolderAction = 'fola',
    epSEFolderActionCode = 'actn',
    epSEWithItemList = 'flst',
    epSEWithWindowSize = 'fnsz',
};

enum {
    ecSEDoScript = 'misc',
    eiSEDoScript = 'dosc',
};

enum {
    ecSEDuplicate = 'core',
    eiSEDuplicate = 'clon',
    epSETo = 'insh',
    epSEWithProperties = 'prdt',
};

enum {
    ecSEEditActionOf = 'faco',
    eiSEEditActionOf = 'edfa',
    epSEUsingActionName = 'snam',
    epSEUsingActionNumber = 'indx',
};

enum {
    ecSEEndTransaction_ = 'misc',
    eiSEEndTransaction_ = 'endt',
};

enum {
    ecSEExists = 'core',
    eiSEExists = 'doex',
};

enum {
    ecSEGet = 'core',
    eiSEGet = 'getd',
};

enum {
    ecSEIncrement = 'prcs',
    eiSEIncrement = 'incE',
};

enum {
    ecSEKeyCode = 'prcs',
    eiSEKeyCode = 'kcod',
//  epSEUsing = 'faal',
};

enum {
    ecSEKeyDown = 'prcs',
    eiSEKeyDown = 'keyF',
};

enum {
    ecSEKeyUp = 'prcs',
    eiSEKeyUp = 'keyU',
};

enum {
    ecSEKeystroke = 'prcs',
    eiSEKeystroke = 'kprs',
//  epSEUsing = 'faal',
};

enum {
    ecSELaunch = 'ascr',
    eiSELaunch = 'noop',
};

enum {
    ecSELogOut = 'fndr',
    eiSELogOut = 'logo',
};

enum {
    ecSEMake = 'core',
    eiSEMake = 'crel',
//  epSEAt = 'insh',
    epSENew_ = 'kocl',
    epSEWithData = 'data',
//  epSEWithProperties = 'prdt',
};

enum {
    ecSEMove = 'core',
    eiSEMove = 'move',
//  epSETo = 'insh',
};

enum {
    ecSEOpen = 'aevt',
    eiSEOpen = 'odoc',
};

enum {
    ecSEOpenLocation = 'GURL',
    eiSEOpenLocation = 'GURL',
    epSEWindow = 'WIND',
};

enum {
    ecSEPerform = 'prcs',
    eiSEPerform = 'perf',
};

enum {
    ecSEPick = 'prcs',
    eiSEPick = 'pick',
};

enum {
    ecSEPrint = 'aevt',
    eiSEPrint = 'pdoc',
    epSEPrintDialog = 'pdlg',
//  epSEWithProperties = 'prdt',
};

enum {
    ecSEQuit = 'aevt',
    eiSEQuit = 'quit',
//  epSESaving = 'savo',
};

enum {
    ecSERemoveActionFrom = 'faco',
    eiSERemoveActionFrom = 'rmfa',
//  epSEUsingActionName = 'snam',
//  epSEUsingActionNumber = 'indx',
};

enum {
    ecSEReopen = 'aevt',
    eiSEReopen = 'rapp',
};

enum {
    ecSERestart = 'fndr',
    eiSERestart = 'rest',
};

enum {
    ecSERun = 'aevt',
    eiSERun = 'oapp',
};

enum {
    ecSESave = 'core',
    eiSESave = 'save',
    epSEAs = 'fltp',
    epSEIn = 'kfil',
};

enum {
    ecSESelect = 'misc',
    eiSESelect = 'slct',
};

enum {
    ecSESet = 'core',
    eiSESet = 'setd',
//  epSETo = 'data',
};

enum {
    ecSEShutDown = 'fndr',
    eiSEShutDown = 'shut',
};

enum {
    ecSESleep = 'fndr',
    eiSESleep = 'slep',
};
