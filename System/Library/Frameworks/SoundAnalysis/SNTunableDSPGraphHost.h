//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@interface SNTunableDSPGraphHost : NSObject
{
    struct unique_ptr<AUProcessingBlock_DSPGraph, std::default_delete<AUProcessingBlock_DSPGraph>> _tuningHost;	// 8 = 0x8
}

- (id).cxx_construct;	// IMP=0x00000000001e301b
- (void).cxx_destruct;	// IMP=0x00000000001e2ffa
- (id)initWithGraph:(id)arg1 error:(id *)arg2;	// IMP=0x00000000001e2ce4

@end

