//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <TelephonyUtilities/NSObject-Protocol.h>

@protocol TUFeatureFlags <NSObject>
+ (_Bool)civicBlurPosterEnabled;
+ (_Bool)civicBlurAvatarsEnabled;
@property(readonly, nonatomic) _Bool defaultCallingAppsGracefulFallbackEnabled;
@property(readonly, nonatomic) _Bool transcriptionEvaluationEnabled;
@property(readonly, nonatomic) _Bool oneToOneFaceTimeMyselfEnabled;
@property(readonly, nonatomic) _Bool keepCallsEnabled;
@property(readonly, nonatomic) _Bool btScanAbstraction;
@property(readonly, nonatomic) _Bool aswanEnabled;
@property(readonly, nonatomic) _Bool sharePlayCanEndWhenInitiatorLeaves;
@property(readonly, nonatomic) _Bool defaultAppsEnabled;
@property(readonly, nonatomic) _Bool deviceExpertMigrationEnabled;
@property(readonly, nonatomic) _Bool usesMediaSafetyNetPillDataSource;
@property(readonly, nonatomic) _Bool sessionBasedMutingEnabled;
@property(readonly, nonatomic) _Bool audioCallUIModernizationEnabled;
@property(readonly, nonatomic) _Bool screenSharingSpringBoardEssoniteEnabled;
@property(readonly, nonatomic) _Bool screenSharingRemoteControlEnabled;
@property(readonly, nonatomic) _Bool screenSharingDrawToHighlightEnabled;
@property(readonly, nonatomic) _Bool simulatedModeEnabled;
@property(readonly, nonatomic) _Bool usesModernScreenSharingFromMessages;
@property(readonly, nonatomic) _Bool requestToScreenShareEnabled;
@property(readonly, nonatomic) _Bool uniquelyFaceTimeEnabled;
@property(readonly, nonatomic) _Bool appleAccountRebrandEnabled;
@property(readonly, nonatomic) _Bool vmCatchUpDonationEnabled;
@property(readonly, nonatomic) _Bool ftAppDeletionEnabled;
@property(readonly, nonatomic) _Bool uninstalledAppStoreLockupEnabled;
@property(readonly, nonatomic) _Bool silencedCallNotificationBlockAndReportEnabled;
@property(readonly, nonatomic) _Bool liveIDLookupEnabled;
@property(readonly, nonatomic) _Bool unknownInitiatorReportEnabled;
@property(readonly, nonatomic) _Bool videoMessagingSpamReportEnabled;
@property(readonly, nonatomic) _Bool reactionsEnabled;
@property(readonly, nonatomic) _Bool wombatWisdomEnabled;
@property(readonly, nonatomic) _Bool phoneRecentsAvatarsCarplayEnabled;
@property(readonly, nonatomic) _Bool phoneRecentsAvatarsEnabled;
@property(readonly, nonatomic) _Bool favoritesCallTapTargetsEnabled;
@property(readonly, nonatomic) _Bool recentsCallTapTargetsEnabled;
@property(readonly, nonatomic) _Bool previewMSROptimizationEnabled;
@property(readonly, nonatomic) _Bool sharePlayInFaceTimeCanvasEnabled;
@property(readonly, nonatomic) _Bool gameCenterSharePlayIntegration;
@property(readonly, nonatomic) _Bool faceTimeLegacyAppEnabled;
@property(readonly, nonatomic) _Bool screenSharingDeskViewSqueegeeEnabled;
@property(readonly, nonatomic) _Bool screenSharingDeskViewEnabled;
@property(readonly, nonatomic) _Bool screenSharingCALayerHostMode;
@property(readonly, nonatomic) _Bool callsBusinessMetadataQuery;
@property(readonly, nonatomic) _Bool groupConversations;
@property(readonly, nonatomic) _Bool callManagementMuteControl;
@property(readonly, nonatomic) _Bool captionDraggingEnabled;
@property(readonly, nonatomic) _Bool memojiCameraEnabled;
@property(readonly, nonatomic) _Bool linkNamesEnabled;
@property(readonly, nonatomic) _Bool greenTeaLinksEnabled;
@property(readonly, nonatomic) _Bool avcCameraSelectionEnabled;
@property(readonly, nonatomic) _Bool continuityCaptureEnabled;
@property(readonly, nonatomic) _Bool avLessSharePlayEnabled;
@property(readonly, nonatomic) _Bool sckSystemPickerEnabled;
@property(readonly, nonatomic) _Bool mochiEnabled;
@property(readonly, nonatomic) _Bool fullScreenVoicemailDetailsEnabled;
@property(readonly, nonatomic) _Bool callManagerEnabled;
@property(readonly, nonatomic) _Bool embedSwapBannerEnabled;
@property(readonly, nonatomic) _Bool incomingBannerOverSixUpEnabled;
@property(readonly, nonatomic) _Bool nameAndPhotoBackwardsCompatibilityEnabled;
@property(readonly, nonatomic) _Bool nameAndPhotoEnabledC3;
@property(readonly, nonatomic) _Bool nameAndPhotoEnabled;
@property(readonly, nonatomic) _Bool requestA2DPOverIncomingCalls;
@property(readonly, nonatomic) _Bool uPlusOneFullBleedHandoffEnabled;
@property(readonly, nonatomic) _Bool uPlusOneScreenSharing;
@property(readonly, nonatomic) _Bool uPlusNDowngrade;
@property(readonly, nonatomic) _Bool gftDowngradeToOneToOne;
@property(readonly, nonatomic) _Bool suggestionsReloadForSelectedRecipients;
@property(readonly, nonatomic) _Bool aTVHandoff;
@property(readonly, nonatomic) _Bool TTRBannerEnabled;
@property(readonly, nonatomic) _Bool expanseBTSwitchingEnabled;
@property(readonly, nonatomic) _Bool supportsScreenSharing;
@property(readonly, nonatomic) _Bool unreliableMessengerEnabled;
@property(readonly, nonatomic) _Bool qrPluginEncryptionEnabled;
@property(readonly, nonatomic) _Bool nonInterruptingCalls;
@property(readonly, nonatomic) _Bool livePhotoXPCServiceEnabled;
@property(readonly, nonatomic) _Bool FTUserScore;
@property(readonly, nonatomic) _Bool ftvSpatialAudioEnabled;
@property(readonly, nonatomic) _Bool sharePlayWithAirplayEnabled;
@property(readonly, nonatomic) _Bool sharePlayDiscoverabilityEnabled;
@property(readonly, nonatomic) _Bool sharePlayDisabled;
@property(readonly, nonatomic) _Bool expanseEnabled;
@property(readonly, nonatomic) _Bool uNNotificationsMacOSEnabled;
@property(readonly, nonatomic) _Bool livePhotoDonation;
@property(readonly, nonatomic) _Bool shouldRingForIncomingCallEnabled;
@property(readonly, nonatomic) _Bool controlMessageOverQREnabled;
@property(readonly, nonatomic) _Bool uPlusOneSessionWithCapabilitiesEnabled;
@property(readonly, nonatomic) _Bool participantIDToURIRemovedEnabled;
@property(readonly, nonatomic) _Bool lvmExpansionLiveOnEnabled;
@property(readonly, nonatomic) _Bool callScreeningRTTEnabled;
@property(readonly, nonatomic) _Bool callScreeningEnabledM3;
@property(readonly, nonatomic) _Bool callScreeningEnabled;
@property(readonly, nonatomic) _Bool intelligentRoutingEnabled;
@property(readonly, nonatomic) _Bool lagunaContinuityCompanionModeMessageSupport;
@property(readonly, nonatomic) _Bool lagunaContinuityCompanionModeEnabled;
@property(readonly, nonatomic) _Bool lagunaAudioCallsEnabled;
@property(readonly, nonatomic) _Bool lagunaLiveCaptionsEnabled;
@property(readonly, nonatomic) _Bool lagunaIncomingCallsEnabled;
@property(readonly, nonatomic) _Bool lagunaPullBackEnabled;
@property(readonly, nonatomic) _Bool lagunaEnabled;
@property(readonly, nonatomic) _Bool conversationHandoffEnabled;
@property(readonly, nonatomic) _Bool conversationOneToOneModeEnabled;
@property(readonly, nonatomic) _Bool videoMessagingEnabledM3;
@property(readonly, nonatomic) _Bool videoMessagingEnabled;
@end

