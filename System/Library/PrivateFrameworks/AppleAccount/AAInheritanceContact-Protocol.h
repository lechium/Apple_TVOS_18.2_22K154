//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <AppleAccount/NSObject-Protocol.h>

@class AKInheritanceAccessKey, NSString, NSUUID;

@protocol AAInheritanceContact <NSObject>
@property(readonly, nonatomic) NSString *recordBuildVersion;
@property(readonly, nonatomic) unsigned long long repairCount;
@property(readonly, nonatomic) NSString *repairDate;
@property(readonly, nonatomic) NSUUID *otPeerID;
@property(retain, nonatomic) AKInheritanceAccessKey *accessKey;
@property(readonly, nonatomic) NSString *benefactorAltDSID;
@property(readonly, nonatomic) NSUUID *beneficiaryID;
- (id)initWithBeneficiaryID:(NSUUID *)arg1 benefactorAltDSID:(NSString *)arg2;
@end

