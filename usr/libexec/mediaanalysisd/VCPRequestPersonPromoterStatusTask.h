//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSURL;

@interface VCPRequestPersonPromoterStatusTask : NSObject
{
    struct atomic<bool> _started;	// 8 = 0x8
    struct atomic<bool> _cancel;	// 9 = 0x9
    _Bool _advancedStatus;	// 10 = 0xa
    NSURL *_photoLibraryURL;	// 16 = 0x10
    CDUnknownBlockType _progressHandler;	// 24 = 0x18
    CDUnknownBlockType _reply;	// 32 = 0x20
    CDUnknownBlockType _cancelBlock;	// 40 = 0x28
}

+ (id)taskWithAdvancedFlag:(_Bool)arg1 andPhotoLibraryURL:(id)arg2 andProgressHandler:(CDUnknownBlockType)arg3 andReply:(CDUnknownBlockType)arg4;	// IMP=0x002000000013f0df
- (void).cxx_destruct;	// IMP=0x002000000013f6ae
@property(copy, nonatomic) CDUnknownBlockType cancelBlock; // @synthesize cancelBlock=_cancelBlock;
- (_Bool)autoCancellable;	// IMP=0x001000000013f68d
- (int)run;	// IMP=0x001000000013f3af
- (_Bool)isCanceled;	// IMP=0x001000000013f390
- (void)cancel;	// IMP=0x001000000013f385
- (float)resourceRequirement;	// IMP=0x001000000013f377
- (void)dealloc;	// IMP=0x001000000013f19e
- (id)initWithAdvancedFlag:(_Bool)arg1 andPhotoLibraryURL:(id)arg2 andProgressHandler:(CDUnknownBlockType)arg3 andReply:(CDUnknownBlockType)arg4;	// IMP=0x001000000013f017

@end

