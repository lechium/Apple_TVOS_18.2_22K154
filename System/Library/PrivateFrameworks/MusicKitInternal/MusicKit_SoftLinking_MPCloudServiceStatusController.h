//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class MPCloudServiceStatusController;

__attribute__((visibility("hidden")))
@interface MusicKit_SoftLinking_MPCloudServiceStatusController : NSObject
{
    MPCloudServiceStatusController *_underlyingServiceStatusController;	// 8 = 0x8
}

+ (id)cloudLibraryEnabledDidChangeNotificationName;	// IMP=0x0040000000015104
+ (id)sharedController;	// IMP=0x0040000000014d8c
- (void).cxx_destruct;	// IMP=0x00000000000151b2
- (void)_handleCloudLibraryEnabledDidChangeNotification:(id)arg1;	// IMP=0x0000000000015111
- (void)endObservingCloudLibraryEnabled;	// IMP=0x00000000000150ee
- (void)beginObservingCloudLibraryEnabled;	// IMP=0x00000000000150d8
- (void)dealloc;	// IMP=0x000000000001503e
- (id)_initWithUnderlyingServiceStatusController:(id)arg1;	// IMP=0x0000000000014ec3

@end

