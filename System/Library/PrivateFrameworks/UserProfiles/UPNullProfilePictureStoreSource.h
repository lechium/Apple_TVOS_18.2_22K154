//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

__attribute__((visibility("hidden")))
@interface UPNullProfilePictureStoreSource : NSObject
{
}

- (void)pruneProfilePictureCacheForRequest:(id)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x0000000000011bca
- (void)fetchProfilePictureCacheSnapshotWithCompletion:(CDUnknownBlockType)arg1;	// IMP=0x0000000000011bbd
- (void)fetchProfilePictureForRequest:(id)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x0000000000011b56
- (id)pruneProfilePictureCacheForRequest:(id)arg1 error:(out id *)arg2;	// IMP=0x0000000000011b49
- (id)profilePictureCacheSnapshotWithError:(out id *)arg1;	// IMP=0x0000000000011b3c
- (id)cachedProfilePictureForRequest:(id)arg1 error:(out id *)arg2;	// IMP=0x0000000000011afb
- (id)addObserver:(id)arg1;	// IMP=0x0000000000011ae2

@end

