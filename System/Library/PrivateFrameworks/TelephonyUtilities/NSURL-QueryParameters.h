//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <Foundation/NSURL.h>

@class NSString, NSUUID;

@interface NSURL (QueryParameters)
+ (id)screenSharingAppURL;	// IMP=0x0010000000018fa5
+ (_Bool)isDefaultAppScheme:(id)arg1;	// IMP=0x0010000000017484
+ (id)faceTimeAppVideoMessagePlaybackURLForUUID:(id)arg1;	// IMP=0x0010000000017331
+ (id)faceTimeVideoMessagePlaybackURLForUUID:(id)arg1;	// IMP=0x00100000000171c0
+ (id)faceTimeRefreshShareableContentURLForBundleIdentifier:(id)arg1;	// IMP=0x0010000000017092
+ (id)faceTimeAppJoinConversationURLForConversationLinkURL:(id)arg1;	// IMP=0x0010000000016ed2
+ (id)facetimeAppViewLinkRequestDetailsURL;	// IMP=0x0010000000016e46
+ (id)faceTimeAppViewLinkDetailsURLForPseudonym:(id)arg1;	// IMP=0x0010000000016cbf
+ (id)faceTimeAnswerURLWithSourceIdentifier:(id)arg1;	// IMP=0x0010000000016be1
+ (id)faceTimeUpdateForegroundAppURLForBundleIdentifier:(id)arg1 applicationType:(long long)arg2;	// IMP=0x00100000000169dc
+ (id)faceTimeRefreshShareableContentURL;	// IMP=0x00100000000168b8
+ (id)faceTimeAppJoinConversationLinkURL;	// IMP=0x001000000001680f
+ (id)faceTimeNeedsBackgroundLaunchURL;	// IMP=0x0010000000016740
+ (id)faceTimeAppViewLinkRequesetDetailsURL;	// IMP=0x0010000000016697
+ (id)faceTimeAppViewLinkDetailsURL;	// IMP=0x00100000000165ee
+ (id)faceTimeUpdateForegroundAppURL;	// IMP=0x001000000001651f
+ (id)faceTimeShowAccessoryButtonEventsNoticeUIURL;	// IMP=0x0010000000016450
+ (id)faceTimeShowIncomingTransmissionNoticeUIURL;	// IMP=0x0010000000016381
+ (id)faceTimeShowLagunaPullConversationURL;	// IMP=0x00100000000162b2
+ (id)faceTimeShowHandoffEligibleNearbyURL;	// IMP=0x00100000000161e3
+ (id)faceTimeShowSystemCallControlsURL;	// IMP=0x0010000000016114
+ (id)faceTimeShowCarPlayInCallUIURL;	// IMP=0x0010000000016045
+ (id)showKeypadURL;	// IMP=0x0010000000015f76
+ (id)faceTimeShowInviteUIURL;	// IMP=0x0010000000015ea7
+ (id)faceTimeShowHandoffUIURL;	// IMP=0x0010000000015dd8
+ (id)faceTimeShowInCallUIURL;	// IMP=0x0010000000015d09
+ (id)faceTimeLaunchForScreeningURL;	// IMP=0x0010000000015c3a
+ (id)faceTimeLaunchForOutgoingConversationURL;	// IMP=0x0010000000015b6b
+ (id)faceTimeLaunchForIncomingCallURL;	// IMP=0x0010000000015a9c
+ (id)faceTimePromptURLWithURL:(id)arg1;	// IMP=0x00100000000159da
+ (id)faceTimeURLWithURL:(id)arg1;	// IMP=0x0010000000015959
+ (id)_applyFaceTimeScheme:(id)arg1 toFaceTimeURL:(id)arg2;	// IMP=0x0010000000015818
+ (id)faceTimeTelephonyURLWithPhoneNumber:(id)arg1 showPrompt:(_Bool)arg2;	// IMP=0x00100000000156cf
+ (id)faceTimeTelephonyURLWithPhoneNumber:(id)arg1;	// IMP=0x00100000000156bb
+ (id)faceTimeURLWithDestinationID:(id)arg1 addressBookUID:(int)arg2 forceAssist:(_Bool)arg3 suppressAssist:(_Bool)arg4 wasAssisted:(_Bool)arg5 audioOnly:(_Bool)arg6;	// IMP=0x001000000001550d
+ (id)faceTimeURLWithDestinationID:(id)arg1 addressBookUID:(int)arg2 audioOnly:(_Bool)arg3;	// IMP=0x00100000000154f4
+ (id)faceTimeURLWithDestinationID:(id)arg1 addressBookUID:(int)arg2;	// IMP=0x00100000000154d8
+ (id)faceTimeURLWithDestinationID:(id)arg1;	// IMP=0x00100000000154b7
+ (id)_faceTimeURLWithHandle:(id)arg1 addressBookUID:(int)arg2 audioOnly:(_Bool)arg3;	// IMP=0x001000000001526b
+ (id)_faceTimeURLWithDestinationID:(id)arg1 addressBookUID:(int)arg2 audioOnly:(_Bool)arg3;	// IMP=0x00100000000151f1
+ (id)faceTimeVideoMessageScheme;	// IMP=0x0010000000014ff2
+ (id)TUDialRequestSchemeFaceTimeAudio;	// IMP=0x0010000000014fe1
+ (id)TUDialRequestSchemeFaceTime;	// IMP=0x0010000000014fd0
+ (id)TUDialRequestSchemeTelephony;	// IMP=0x0010000000014fbf
+ (id)TUDialRequestSchemeForceTelephonyPrompt;	// IMP=0x0010000000014fb2
+ (id)TUDialRequestSchemeForceTelephony;	// IMP=0x0010000000014fa5
+ (id)TUDialRequestSchemeDefaultAppPrompt;	// IMP=0x0010000000014f98
+ (id)TUDialRequestSchemeDefaultApp;	// IMP=0x0010000000014f8b
+ (id)faceTimeMultiwayScheme;	// IMP=0x0010000000014f7a
+ (id)faceTimeOpenLinkScheme;	// IMP=0x0010000000014f69
+ (id)faceTimeSystemCallControlsScheme;	// IMP=0x0010000000014f58
+ (id)faceTimeAudioScheme;	// IMP=0x0010000000014f47
+ (id)faceTimeScheme;	// IMP=0x0010000000014f36
+ (id)faceTimePinExchangeScheme;	// IMP=0x0010000000014e7b
+ (id)faceTimeURLWithPhoneNumber:(id)arg1 addressBookUID:(int)arg2 audioOnly:(_Bool)arg3 forceAssist:(_Bool)arg4 suppressAssist:(_Bool)arg5 wasAssisted:(_Bool)arg6;	// IMP=0x0010000000019122
+ (id)faceTimeURLWithPhoneNumber:(id)arg1 addressBookUID:(int)arg2 forceAssist:(_Bool)arg3 suppressAssist:(_Bool)arg4 wasAssisted:(_Bool)arg5;	// IMP=0x0010000000019104
+ (id)phoneAppVoicemailURLForMessageUUID:(id)arg1;	// IMP=0x0010000000093ac1
+ (id)phoneAppVoicemailURLForRecordID:(unsigned long long)arg1;	// IMP=0x001000000009396d
+ (id)telephonyURLForTelEmergencyCall;	// IMP=0x001000000009202d
+ (id)telephonyURLForVoicemail;	// IMP=0x0010000000091fac
+ (id)telephonyURLWithDestinationID:(id)arg1 addressBookUID:(int)arg2 forceAssist:(_Bool)arg3 suppressAssist:(_Bool)arg4 wasAssisted:(_Bool)arg5;	// IMP=0x0010000000091e37
+ (id)telephonyURLWithDestinationID:(id)arg1 addressBookUID:(int)arg2;	// IMP=0x0010000000091d77
+ (id)telephonyURLWithDestinationID:(id)arg1 promptUser:(_Bool)arg2;	// IMP=0x0010000000091c43
+ (id)telephonyURLWithDestinationID:(id)arg1;	// IMP=0x0010000000091c2f
+ (id)tu_defaultAllowedSchemes;	// IMP=0x00100000000be479
- (id)URLByDeletingQueryParameterWithKey:(id)arg1;	// IMP=0x001000000000d606
- (id)URLBySettingQueryParameterValue:(id)arg1 forKey:(id)arg2;	// IMP=0x001000000000d4bd
- (id)tuQueryParameters;	// IMP=0x001000000000d03d
- (id)queryParameters;	// IMP=0x001000000000d02b
- (id)answerRequestSourceIdentifier;	// IMP=0x0010000000018f4e
- (_Bool)isAnswerRequestURL;	// IMP=0x0010000000018ee4
- (_Bool)isFaceTimeNeedsBackgroundLaunchURL;	// IMP=0x0010000000018e68
- (long long)foregroundAppApplicationType;	// IMP=0x0010000000018df3
- (id)foregroundAppBundleIdentifier;	// IMP=0x0010000000018d9c
@property(readonly, nonatomic) NSString *recentsUniqueID;
- (_Bool)isFaceTimeRecentsDetailsViewURL;	// IMP=0x0010000000018bcf
- (id)videoMessageUUID;	// IMP=0x0010000000018a68
- (_Bool)isFaceTimeAppVideoMessagePlaybackURL;	// IMP=0x00100000000189cc
- (_Bool)isVideoMessagePlaybackURL;	// IMP=0x0010000000018930
- (_Bool)isRefreshShareableContentURL;	// IMP=0x00100000000188b4
- (_Bool)isUpdateForegroundAppURL;	// IMP=0x0010000000018838
- (_Bool)isShowScreenSharingURL;	// IMP=0x00100000000187ed
- (_Bool)isShowLagunaPullConversationURL;	// IMP=0x0010000000018771
- (_Bool)isShowHandoffEligibleNearbyURL;	// IMP=0x00100000000186f5
- (_Bool)isShowSystemCallControlsURL;	// IMP=0x0010000000018679
- (_Bool)isShowCarPlayInCallUIURL;	// IMP=0x00100000000185fd
- (_Bool)isShowAccessoryButtonEventsNoticeURL;	// IMP=0x0010000000018581
- (_Bool)isShowIncomingTransmissionNoticeURL;	// IMP=0x0010000000018505
- (_Bool)isShowKeypadURL;	// IMP=0x0010000000018489
- (_Bool)isShowInCallUIURL;	// IMP=0x00100000000183c2
- (_Bool)isLaunchForScreeningURL;	// IMP=0x0010000000018346
- (_Bool)isLaunchForOutgoingConversationURL;	// IMP=0x00100000000182ca
- (_Bool)isLaunchForIncomingCallURL;	// IMP=0x001000000001824e
- (_Bool)isDialCallURL;	// IMP=0x0010000000018217
- (_Bool)hasNoPromptOption;	// IMP=0x001000000001818f
- (id)conversationLinkURLForJoinConversation;	// IMP=0x0010000000017ee4
- (_Bool)isFaceTimeAppJoinConversationLinkURL;	// IMP=0x0010000000017e68
- (id)conversationLinkURLForOpenLinkURL;	// IMP=0x0010000000017bbd
- (_Bool)isFaceTimeOpenLinkURL;	// IMP=0x0010000000017b48
- (id)pseudonymForLinkDetailsView;	// IMP=0x00100000000178d0
- (_Bool)isFaceTimeAppViewLinkRequestDetailsURL;	// IMP=0x0010000000017854
- (_Bool)isFaceTimeAppViewLinkDetailsURL;	// IMP=0x00100000000177d8
- (_Bool)isSystemCallControlsURL;	// IMP=0x0010000000017763
- (_Bool)isFaceTimeMultiwayURL;	// IMP=0x00100000000176ee
- (_Bool)isFaceTimeAudioPromptURL;	// IMP=0x00100000000176a3
- (_Bool)isFaceTimeAudioURL;	// IMP=0x0010000000017611
- (_Bool)isFaceTimePromptURL;	// IMP=0x00100000000175c6
- (_Bool)isFaceTimeURL;	// IMP=0x0010000000017534
- (_Bool)_isPhoneNumberID:(id)arg1;	// IMP=0x0010000000015188
- (id)faceTimeDestinationAccount;	// IMP=0x0010000000015057
@property(readonly, copy, nonatomic) NSUUID *voicemailMessageUUID;
@property(readonly, nonatomic) long long voicemailRecordID;
- (_Bool)isPhoneAppVoicemailURL;	// IMP=0x00100000000934fc
- (id)_mobilePhoneQueryParameters;	// IMP=0x0010000000093090
- (id)_mobilePhonePathParameters;	// IMP=0x0010000000092d90
- (id)telephonyParameterDictionary;	// IMP=0x0010000000092cc6
@property(readonly) _Bool isVoicemailURL;
@property(readonly) _Bool isEmergencyCallURL;
@property(readonly) _Bool isEmergencyURL;
@property(readonly, nonatomic, getter=isBasebandLogURL) _Bool basebandLogURL;
- (id)webSafeTelephoneURL;	// IMP=0x0010000000092935
- (_Bool)isWebSafeTelephoneURL;	// IMP=0x00100000000927ea
@property(readonly, copy, nonatomic) NSString *formattedPhoneNumber;
- (_Bool)_hasScheme:(id)arg1;	// IMP=0x00100000000925f3
- (_Bool)hasTelephonyScheme;	// IMP=0x00100000000925b3
- (_Bool)isTelephonyPromptURL;	// IMP=0x001000000009259a
- (_Bool)isTelephonyURL;	// IMP=0x0010000000092543
- (_Bool)_dialAssistBooleanQueryParameterValueForKey:(id)arg1;	// IMP=0x0010000000092462
@property(readonly) _Bool wasAlreadyAssisted;
@property(readonly) _Bool suppressAssist;
@property(readonly) _Bool forceAssist;
@property(readonly) NSString *originatingUIIdentifier;
@property(readonly) int callService;
@property(readonly, nonatomic) int addressBookUID;
@property(readonly) NSString *phoneNumber;
- (id)_destinationIDConvertingNumbersToLatin:(_Bool)arg1;	// IMP=0x00100000000920a7
- (id)sanitizedCopyWithZone:(struct _NSZone *)arg1 allowedSchemes:(id)arg2;	// IMP=0x00100000000be5b8
- (id)sanitizedCopyWithZone:(struct _NSZone *)arg1;	// IMP=0x00100000000be54d
- (id)sanitizedCopy;	// IMP=0x00100000000be4e5

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;
@end

