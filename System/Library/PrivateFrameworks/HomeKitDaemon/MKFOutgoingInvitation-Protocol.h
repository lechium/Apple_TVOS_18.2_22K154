//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <HomeKitDaemon/MKFInvitation-Protocol.h>
#import <HomeKitDaemon/MKFOutgoingInvitationPublicExtensions-Protocol.h>

@class CKDeviceToDeviceShareInvitationToken, MKFOutgoingInvitationDatabaseID, NSArray, NSDate, NSNumber, NSString, NSUUID, Protocol;
@protocol MKFAccessory, MKFAirPlayAccessory, MKFAppleMediaAccessory, MKFHAPAccessory, MKFHome, MKFUser;

@protocol MKFOutgoingInvitation <MKFInvitation, MKFOutgoingInvitationPublicExtensions>
@property(readonly, copy, nonatomic) MKFOutgoingInvitationDatabaseID *databaseID;
@property(readonly, retain, nonatomic) NSArray *allowedAccessories;
@property(retain, nonatomic) id <MKFUser> pendingUser;
@property(readonly, retain, nonatomic) id <MKFHome> home;
@property(retain, nonatomic) CKDeviceToDeviceShareInvitationToken *shareToken;
@property(copy, nonatomic) NSNumber *remoteAccessAllowed;
@property(copy, nonatomic) NSNumber *privilege;
@property(copy, nonatomic) NSString *inviteeUserID;
@property(copy, nonatomic) NSDate *dateSent;
@property(copy, nonatomic) NSNumber *cameraAccessLevel;
@property(copy, nonatomic) NSNumber *announceAccessLevel;
@property(copy, nonatomic) NSString *accessCode;
- (void)removeAllowedAccessoriesObject:(id <MKFAccessory>)arg1;
- (void)addAllowedAccessoriesObject:(id <MKFAccessory>)arg1;
- (id <MKFHAPAccessory>)findAllowedAccessoriesRelationOfTypeHAPAccessoryWithModelID:(NSUUID *)arg1;
- (id <MKFHAPAccessory>)createAllowedAccessoriesRelationOfTypeHAPAccessoryWithModelID:(NSUUID *)arg1;
- (id <MKFHAPAccessory>)materializeOrCreateAllowedAccessoriesRelationOfTypeHAPAccessoryWithModelID:(NSUUID *)arg1 createdNew:(_Bool *)arg2;
- (id <MKFAppleMediaAccessory>)findAllowedAccessoriesRelationOfTypeAppleMediaAccessoryWithModelID:(NSUUID *)arg1;
- (id <MKFAppleMediaAccessory>)createAllowedAccessoriesRelationOfTypeAppleMediaAccessoryWithModelID:(NSUUID *)arg1;
- (id <MKFAppleMediaAccessory>)materializeOrCreateAllowedAccessoriesRelationOfTypeAppleMediaAccessoryWithModelID:(NSUUID *)arg1 createdNew:(_Bool *)arg2;
- (id <MKFAirPlayAccessory>)findAllowedAccessoriesRelationOfTypeAirPlayAccessoryWithModelID:(NSUUID *)arg1;
- (id <MKFAirPlayAccessory>)createAllowedAccessoriesRelationOfTypeAirPlayAccessoryWithModelID:(NSUUID *)arg1;
- (id <MKFAirPlayAccessory>)materializeOrCreateAllowedAccessoriesRelationOfTypeAirPlayAccessoryWithModelID:(NSUUID *)arg1 createdNew:(_Bool *)arg2;
- (id <MKFAccessory>)createAllowedAccessoriesRelationOfType:(Protocol *)arg1 modelID:(NSUUID *)arg2;
- (id <MKFAccessory>)materializeOrCreateAllowedAccessoriesRelationOfType:(Protocol *)arg1 modelID:(NSUUID *)arg2 createdNew:(_Bool *)arg3;
@end

