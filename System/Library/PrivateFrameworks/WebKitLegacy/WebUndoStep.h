//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

__attribute__((visibility("hidden")))
@interface WebUndoStep : NSObject
{
    struct RefPtr<WebCore::UndoStep, WTF::RawPtrTraits<WebCore::UndoStep>, WTF::DefaultRefDerefTraits<WebCore::UndoStep>> m_step;	// 8 = 0x8
}

+ (id)stepWithUndoStep:(void *)arg1;	// IMP=0x00600000000e9df0
+ (void)initialize;	// IMP=0x00600000000e9d20
- (id).cxx_construct;	// IMP=0x00000000000e9e70
- (void).cxx_destruct;	// IMP=0x00000000000e9e40
- (void *)step;	// IMP=0x00000000000e9e30
- (void)dealloc;	// IMP=0x00000000000e9da0
- (id)initWithUndoStep:(void *)arg1;	// IMP=0x00000000000e9d30

@end

