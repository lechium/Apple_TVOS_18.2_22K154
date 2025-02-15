//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSString;

__attribute__((visibility("hidden")))
@interface HMCameraClipFetchAssetContextOperationDataSource : NSObject
{
}

- (id)createVideoFileCombinerWithVideoFileURLs:(id)arg1 queue:(id)arg2;	// IMP=0x00000000000a9760
- (_Bool)removeItemAtURL:(id)arg1 error:(id *)arg2;	// IMP=0x00000000000a96e1
- (_Bool)copyItemAtURL:(id)arg1 toURL:(id)arg2 error:(id *)arg3;	// IMP=0x00000000000a964c
- (id)createTemporaryDirectoryAppropriateForURL:(id)arg1 error:(id *)arg2;	// IMP=0x00000000000a95ae
- (id)outputStreamToFileAtURL:(id)arg1 shouldAppend:(_Bool)arg2;	// IMP=0x00000000000a9595
- (_Bool)writeData:(id)arg1 toFileURL:(id)arg2 error:(id *)arg3;	// IMP=0x00000000000a957b
- (id)dataFromEncryptedDataContext:(id)arg1 usingDecryptionManager:(id)arg2;	// IMP=0x00000000000a9566
- (id)dataTaskWithURL:(id)arg1 httpHeaderFields:(id)arg2;	// IMP=0x00000000000a94f4

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

