//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class HMDAccount, HMDAccountHandle, HMDApplicationData, NSArray, NSString, NSUUID;

__attribute__((visibility("hidden")))
@interface HMDMutableHomeData
{
}

- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x000000000069f4d0

// Remaining properties
@property(copy, nonatomic) NSArray *UUIDsOfRemovedHomes; // @dynamic UUIDsOfRemovedHomes;
@property(nonatomic) _Bool accessAllowedWhenLocked; // @dynamic accessAllowedWhenLocked;
@property(copy, nonatomic) NSArray *accessories; // @dynamic accessories;
@property(retain, nonatomic) HMDAccount *account; // @dynamic account;
@property(copy, nonatomic) HMDApplicationData *applicationData; // @dynamic applicationData;
@property(copy, nonatomic) NSArray *cloudZones; // @dynamic cloudZones;
@property(copy, nonatomic) NSString *currentDevice; // @dynamic currentDevice;
@property(copy, nonatomic) NSUUID *dataTag; // @dynamic dataTag;
@property(nonatomic) long long dataVersion; // @dynamic dataVersion;
@property(copy, nonatomic) NSArray *homes; // @dynamic homes;
@property(copy, nonatomic) NSArray *incomingInvitations; // @dynamic incomingInvitations;
@property(copy, nonatomic) NSUUID *lastCurrentHomeUUID; // @dynamic lastCurrentHomeUUID;
@property(copy, nonatomic) NSArray *pendingReasonSaved; // @dynamic pendingReasonSaved;
@property(copy, nonatomic) NSArray *pendingUserManagementOperations; // @dynamic pendingUserManagementOperations;
@property(copy, nonatomic) HMDAccountHandle *primaryAccountHandle; // @dynamic primaryAccountHandle;
@property(copy, nonatomic) NSUUID *primaryHomeUUID; // @dynamic primaryHomeUUID;
@property(nonatomic) long long recoveryVersion; // @dynamic recoveryVersion;
@property(copy, nonatomic) NSArray *remoteAccounts; // @dynamic remoteAccounts;
@property(nonatomic) long long residentEnabledState; // @dynamic residentEnabledState;
@property(nonatomic) long long schemaVersion; // @dynamic schemaVersion;
@property(copy, nonatomic) NSArray *unprocessedOperationIdentifiers; // @dynamic unprocessedOperationIdentifiers;

@end

