//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

__attribute__((visibility("hidden")))
@interface UIDictationConnectionFilterState : NSObject
{
    struct __CFString *_transform;	// 8 = 0x8
    CDUnknownBlockType _pendingDictationCommand;	// 16 = 0x10
}

- (void).cxx_destruct;	// IMP=0x0000000000d8f1d6
@property(copy, nonatomic) CDUnknownBlockType pendingDictationCommand; // @synthesize pendingDictationCommand=_pendingDictationCommand;
@property(nonatomic) struct __CFString *transform; // @synthesize transform=_transform;

@end

