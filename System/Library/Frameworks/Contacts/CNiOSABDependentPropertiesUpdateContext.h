//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSData;

__attribute__((visibility("hidden")))
@interface CNiOSABDependentPropertiesUpdateContext : NSObject
{
    _Bool _isUnifiedContact;	// 8 = 0x8
    _Bool _hasPendingImageData;	// 9 = 0x9
    _Bool _hasPendingCropRect;	// 10 = 0xa
    _Bool _hasPendingThumbnailImageData;	// 11 = 0xb
    _Bool _hasPendingSyncImageData;	// 12 = 0xc
    NSData *_pendingImageData;	// 16 = 0x10
    NSData *_pendingThumbnailImageData;	// 24 = 0x18
    NSData *_pendingFullscreenImageData;	// 32 = 0x20
    NSData *_pendingSyncImageData;	// 40 = 0x28
    struct CGRect _pendingCropRect;	// 48 = 0x30
}

+ (_Bool)shouldSetWatchChanges;	// IMP=0x00600000000dab39
+ (id)os_log;	// IMP=0x00600000000d9c52
- (void).cxx_destruct;	// IMP=0x00000000000dad3d
@property(nonatomic) _Bool hasPendingSyncImageData; // @synthesize hasPendingSyncImageData=_hasPendingSyncImageData;
@property(nonatomic) _Bool hasPendingThumbnailImageData; // @synthesize hasPendingThumbnailImageData=_hasPendingThumbnailImageData;
@property(nonatomic) _Bool hasPendingCropRect; // @synthesize hasPendingCropRect=_hasPendingCropRect;
@property(nonatomic) _Bool hasPendingImageData; // @synthesize hasPendingImageData=_hasPendingImageData;
@property(copy, nonatomic) NSData *pendingSyncImageData; // @synthesize pendingSyncImageData=_pendingSyncImageData;
@property(copy, nonatomic) NSData *pendingFullscreenImageData; // @synthesize pendingFullscreenImageData=_pendingFullscreenImageData;
@property(copy, nonatomic) NSData *pendingThumbnailImageData; // @synthesize pendingThumbnailImageData=_pendingThumbnailImageData;
@property(nonatomic) struct CGRect pendingCropRect; // @synthesize pendingCropRect=_pendingCropRect;
@property(copy, nonatomic) NSData *pendingImageData; // @synthesize pendingImageData=_pendingImageData;
@property(nonatomic) _Bool isUnifiedContact; // @synthesize isUnifiedContact=_isUnifiedContact;
- (_Bool)setWatchChangesforThumbnailImageDataToPerson:(void *)arg1 error:(id *)arg2;	// IMP=0x00000000000dab41
- (_Bool)flushPendingImageChangesToPerson:(void *)arg1 logger:(id)arg2 error:(id *)arg3;	// IMP=0x00000000000d9e9b
- (_Bool)logIfConditionFailed:(_Bool)arg1 message:(id)arg2 error:(struct __CFError **)arg3;	// IMP=0x00000000000d9e93
- (void)resetAllData;	// IMP=0x00000000000d9deb

@end

