//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class IDSAccount, IDSService, IMDAccount, IMDChat, IMMessageItem, IMSyndicationAction, NSArray, NSAttributedString, NSData, NSDictionary, NSNumber, NSString, NSURL;

@protocol IMServiceSessionProtocol

@optional
- (void)requestGroupPhotoIfNecessary:(IMDChat *)arg1 incomingParticipantVersion:(long long)arg2 incomingGroupPhotoCreationTime:(NSNumber *)arg3 toIdentifier:(NSString *)arg4 fromIdentifier:(NSString *)arg5 messageIsFromStorage:(_Bool)arg6;
- (void)_blastDoorProcessingWithIMMessageItem:(IMMessageItem *)arg1 chat:(IMDChat *)arg2 account:(IMDAccount *)arg3 fromToken:(NSData *)arg4 fromIDSID:(NSString *)arg5 fromIdentifier:(NSString *)arg6 toIdentifier:(NSString *)arg7 participants:(NSArray *)arg8 groupName:(NSString *)arg9 groupID:(NSString *)arg10 isFromMe:(_Bool)arg11 isLastFromStorage:(_Bool)arg12 isFromStorage:(_Bool)arg13 hideLockScreenNotification:(_Bool)arg14 wantsCheckpointing:(_Bool)arg15 needsDeliveryReceipt:(NSNumber *)arg16 messageBalloonPayloadAttachmentDictionary:(NSDictionary *)arg17 inlineAttachments:(NSDictionary *)arg18 attributionInfoArray:(NSArray *)arg19 nicknameDictionary:(NSDictionary *)arg20 availabilityVerificationRecipientChannelIDPrefix:(NSString *)arg21 availabilityVerificationRecipientEncryptionValidationToken:(NSString *)arg22 availabilityOffGridRecipientSubscriptionValidationToken:(NSString *)arg23 availabilityOffGridRecipientEncryptionValidationToken:(NSString *)arg24 idsService:(IDSService *)arg25 messageContext:(id)arg26 isFromTrustedSender:(_Bool)arg27 isFromSnapTrustedSender:(_Bool)arg28 completionBlock:(void (^)(void))arg29;
- (void)sendDeliveryReceiptForMessageID:(NSString *)arg1 toID:(NSString *)arg2 deliveryContext:(NSDictionary *)arg3 needsDeliveryReceipt:(NSNumber *)arg4 callerID:(NSString *)arg5 account:(IDSAccount *)arg6;
- (_Bool)reflectMarkUnreadToPeerDevicesForMessageGUID:(NSString *)arg1;
- (void)sendNicknameInfoToURIs:(NSArray *)arg1 chatGUID:(NSString *)arg2;
- (_Bool)sendNicknameUpdatesToPeerDevices:(NSDictionary *)arg1 toDestinations:(NSArray *)arg2;
- (void)closeSessionChatID:(NSString *)arg1 identifier:(NSString *)arg2 didDeleteConversation:(_Bool)arg3 style:(unsigned char)arg4;
- (void)enrollSelfDeviceInSMSRelay;
- (void)unEnrollDeviceInSMSRelay:(NSString *)arg1;
- (void)enrollDeviceInSMSRelay:(NSString *)arg1;
- (void)validateProfileWithAccount:(NSString *)arg1;
- (void)unvalidateAliases:(NSArray *)arg1 account:(NSString *)arg2;
- (void)validateAliases:(NSArray *)arg1 account:(NSString *)arg2;
- (void)removeAliases:(NSArray *)arg1 account:(NSString *)arg2;
- (void)addAliases:(NSArray *)arg1 account:(NSString *)arg2;
- (void)relay:(NSString *)arg1 sendCancel:(NSDictionary *)arg2 toPerson:(NSString *)arg3;
- (void)relay:(NSString *)arg1 sendUpdate:(NSDictionary *)arg2 toPerson:(NSString *)arg3;
- (void)relay:(NSString *)arg1 sendInitateRequest:(NSDictionary *)arg2 toPerson:(NSString *)arg3;
- (void)sendAVMessageToPerson:(NSString *)arg1 sessionID:(unsigned int)arg2 type:(unsigned int)arg3 userInfo:(NSDictionary *)arg4 conference:(NSString *)arg5;
- (void)sendVCUpdate:(NSData *)arg1 toPerson:(NSString *)arg2 conference:(NSString *)arg3;
- (void)sendCounterProposalToPerson:(NSString *)arg1 properties:(NSDictionary *)arg2 conference:(NSString *)arg3;
- (void)cancelVCRequestWithPerson:(NSString *)arg1 properties:(NSDictionary *)arg2 conference:(NSString *)arg3 reason:(NSNumber *)arg4;
- (void)respondToVCInvitationWithPerson:(NSString *)arg1 properties:(NSDictionary *)arg2 conference:(NSString *)arg3;
- (void)requestVCWithPerson:(NSString *)arg1 properties:(NSDictionary *)arg2 conference:(NSString *)arg3;
- (_Bool)reflectRecoverChatToPeerDevicesForMessageGUID:(NSString *)arg1;
- (void)sendRecoverCommand:(NSDictionary *)arg1 forChatGUID:(NSString *)arg2;
- (void)sendDeleteCommand:(NSDictionary *)arg1 forChatGUID:(NSString *)arg2;
- (void)sendCommand:(NSNumber *)arg1 withProperties:(NSDictionary *)arg2 toPerson:(NSString *)arg3 toChatID:(NSString *)arg4 identifier:(NSString *)arg5 style:(unsigned char)arg6;
- (void)sendCommand:(NSNumber *)arg1 withProperties:(NSDictionary *)arg2 toPerson:(NSString *)arg3;
- (void)importMessage:(NSDictionary *)arg1 isRead:(_Bool)arg2;
- (void)passwordUpdatedWithAccount:(NSString *)arg1;
- (void)setBlockIdleStatus:(_Bool)arg1;
- (void)setBlockList:(NSArray *)arg1;
- (void)setAllowList:(NSArray *)arg1;
- (void)setBlockingMode:(unsigned int)arg1;
- (void)setProperties:(NSDictionary *)arg1 ofParticipant:(NSString *)arg2 inChatID:(NSString *)arg3 identifier:(NSString *)arg4 style:(unsigned char)arg5;
- (void)sendSyndicationAction:(IMSyndicationAction *)arg1 toChatsWithIdentifiers:(NSArray *)arg2;
- (void)sendRepositionStickerMessage:(IMMessageItem *)arg1 chatIdentifier:(NSString *)arg2 accountID:(NSString *)arg3 style:(unsigned char)arg4;
- (void)sendEditedMessage:(IMMessageItem *)arg1 previousMessage:(IMMessageItem *)arg2 partIndex:(long long)arg3 editType:(unsigned long long)arg4 toChatIdentifier:(NSString *)arg5 style:(unsigned char)arg6 account:(NSString *)arg7 backwardCompatabilityText:(NSAttributedString *)arg8;
- (void)sendSavedReceiptForMessage:(IMMessageItem *)arg1 toChatID:(NSString *)arg2 identifier:(NSString *)arg3 style:(unsigned char)arg4;
- (void)sendPlayedReceiptForMessage:(IMMessageItem *)arg1 toChatID:(NSString *)arg2 identifier:(NSString *)arg3 style:(unsigned char)arg4;
- (void)sendNotifyRecipientCommandForMessage:(IMMessageItem *)arg1 toChatGuid:(NSString *)arg2 identifier:(NSString *)arg3 style:(unsigned char)arg4;
- (void)sendDeliveredQuietlyReceiptForMessage:(IMMessageItem *)arg1 forIncomingMessageFromIDSID:(NSString *)arg2 toChatGuid:(NSString *)arg3 identifier:(NSString *)arg4 style:(unsigned char)arg5 withWillSendToDestinationsHandler:(void (^)(_Bool))arg6;
- (void)sendReadReceiptForMessage:(IMMessageItem *)arg1 toChatID:(NSString *)arg2 identifier:(NSString *)arg3 style:(unsigned char)arg4 reflectOnly:(_Bool)arg5;
- (void)sendReadReceiptForMessage:(IMMessageItem *)arg1 toChatID:(NSString *)arg2 identifier:(NSString *)arg3 style:(unsigned char)arg4;
- (void)sendLogDumpMessageAtFilePath:(NSString *)arg1 toRecipient:(NSString *)arg2 shouldDeleteFile:(_Bool)arg3 withCompletion:(void (^)(_Bool))arg4;
- (void)sendJunkReportMessage:(IMMessageItem *)arg1;
- (void)sendMessage:(IMMessageItem *)arg1 toChatID:(NSString *)arg2 identifier:(NSString *)arg3 style:(unsigned char)arg4;
- (void)eagerUploadCancel:(NSURL *)arg1;
- (void)eagerUploadTransfer:(NSDictionary *)arg1 recipients:(NSArray *)arg2;
- (void)declineInvitationToChatID:(NSString *)arg1 identifier:(NSString *)arg2 style:(unsigned char)arg3;
- (void)removePersonInfo:(NSArray *)arg1 chatID:(NSString *)arg2 identifier:(NSString *)arg3 style:(unsigned char)arg4;
- (void)retryGroupPhotoUpload:(NSString *)arg1 toChatID:(NSString *)arg2 identifier:(NSString *)arg3 style:(unsigned char)arg4 account:(NSString *)arg5 isPhotoRefresh:(_Bool)arg6;
- (void)_requestGroupPhotoResendForChatGUID:(NSString *)arg1 fromIdentifier:(NSString *)arg2 toIdentifier:(NSString *)arg3;
- (void)sendGroupPhotoUpdate:(NSString *)arg1 toChatID:(NSString *)arg2 identifier:(NSString *)arg3 style:(unsigned char)arg4 account:(NSString *)arg5 isPhotoRefresh:(_Bool)arg6;
- (void)sendGroupPhotoUpdate:(NSString *)arg1 toChatID:(NSString *)arg2 identifier:(NSString *)arg3 style:(unsigned char)arg4 account:(NSString *)arg5;
- (void)removeChatID:(NSString *)arg1 identifier:(NSString *)arg2 style:(unsigned char)arg3;
- (void)joinChatID:(NSString *)arg1 handleInfo:(NSDictionary *)arg2 identifier:(NSString *)arg3 style:(unsigned char)arg4 groupID:(NSString *)arg5 lastAddressedHandle:(NSString *)arg6 lastAddressedSIMID:(NSString *)arg7 joinProperties:(NSDictionary *)arg8;
- (void)joinChatID:(NSString *)arg1 handleInfo:(NSDictionary *)arg2 identifier:(NSString *)arg3 style:(unsigned char)arg4 joinProperties:(NSDictionary *)arg5;
- (void)updateAuthorizationCredentials:(NSString *)arg1 token:(NSString *)arg2 account:(NSString *)arg3;
- (void)setValue:(id)arg1 ofProperty:(NSString *)arg2 ofPerson:(NSString *)arg3;
- (void)requestProperty:(NSString *)arg1 ofPerson:(NSString *)arg2;
- (void)stopWatchingBuddy:(NSString *)arg1;
- (void)startWatchingBuddy:(NSString *)arg1;
- (void)requestSubscriptionTo:(NSString *)arg1;
- (void)acceptSubscriptionRequest:(_Bool)arg1 from:(NSString *)arg2;
- (void)renameGroup:(NSString *)arg1 to:(NSString *)arg2;
- (void)changeGroup:(NSString *)arg1 changes:(NSDictionary *)arg2;
- (void)changeGroups:(NSDictionary *)arg1;
- (void)requestGroups;
- (void)unregisterAccount:(NSString *)arg1;
- (void)registerAccount:(NSString *)arg1;
- (void)authenticateAccount:(NSString *)arg1;
- (void)resumeBuddyUpdates;
- (void)holdBuddyUpdates;
- (void)logoutWithAccount:(IMDAccount *)arg1;
- (void)loginWithAccount:(IMDAccount *)arg1;
- (void)logout;
- (void)login;
- (void)autoReconnectWithAccount:(IMDAccount *)arg1;
- (void)autoReconnect;
- (void)autoLogin;
@end

