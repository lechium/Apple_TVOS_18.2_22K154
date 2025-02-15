//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class NSString, NSUUID, UVAPFSCreateVolumeOptions, UVAPFSVolumeInfo;

@protocol UVAPFSProtocol
- (void)unmountVolumeWithIdentifier:(NSString *)arg1 completionHandler:(void (^)(NSError *))arg2;
- (void)mountVolumeWithIdentifier:(NSString *)arg1 path:(NSString *)arg2 completionHandler:(void (^)(NSError *))arg3;
- (NSUUID *)getVolumeUUIDWithIdentifier:(NSString *)arg1 error:(id *)arg2;
- (_Bool)deleteVolumeWithIdentifier:(NSString *)arg1 error:(id *)arg2;
- (UVAPFSVolumeInfo *)createVolumeWithOptions:(UVAPFSCreateVolumeOptions *)arg1 error:(id *)arg2;
- (_Bool)createVolumeMountsDirectoryAtPath:(NSString *)arg1 error:(id *)arg2;
- (NSString *)getContainerBootDeviceAndReturnError:(id *)arg1;
@end

