//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <UserActivity/NSObject-Protocol.h>

@class UASharedPasteboardInfo;

@protocol UASharedPasteboardManagerProtocol <NSObject>
- (void)setReturnPasteboardDataEarlyWithCompletion:(void (^)(_Bool))arg1;
- (void)fetchRemotePasteboardForProcess:(int)arg1 withCompletion:(void (^)(UASharedPasteboardInfo *, NSError *))arg2;
- (void)fetchRemotePasteboardTypesForProcess:(int)arg1 withCompletion:(void (^)(UASharedPasteboardInfo *, NSError *))arg2;
- (void)localPasteboardTypesDidChange:(UASharedPasteboardInfo *)arg1 forGeneration:(unsigned long long)arg2;
- (void)clearLocalPasteboardInformation;
- (void)fetchRemoteDeviceName:(void (^)(NSString *))arg1;
- (void)fetchRemotePasteboardStatus:(void (^)(_Bool))arg1;
@end

