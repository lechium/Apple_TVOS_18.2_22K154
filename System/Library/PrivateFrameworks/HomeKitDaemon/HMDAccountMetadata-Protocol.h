//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class NSString;

@protocol HMDAccountMetadata
@property(readonly, copy) NSString *lastName;
@property(readonly, copy) NSString *firstName;
@property(readonly, copy) NSString *iCloudAltDSID;
- (void)profilePhotoWithCompletionHandler:(void (^)(id <HMDProfilePhoto>, NSError *))arg1;
- (void)updateAccountMetadata;
@end

