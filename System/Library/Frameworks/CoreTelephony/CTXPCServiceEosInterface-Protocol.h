//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class NSString;

@protocol CTXPCServiceEosInterface
- (void)getEOSFirmwareUpdateInfo:(void (^)(CTEOSFirmwareInfo *, NSError *))arg1;
- (void)getEosStatus:(void (^)(NSDictionary *, NSError *))arg1;
- (void)setEosStatus:(NSString *)arg1 assertionState:(NSString *)arg2 completion:(void (^)(_Bool, NSError *))arg3;
@end

