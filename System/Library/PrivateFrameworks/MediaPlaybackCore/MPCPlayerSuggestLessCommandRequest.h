//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import "MPCPlayerCommandRequest.h"

@class MPModelObject;

__attribute__((visibility("hidden")))
@interface MPCPlayerSuggestLessCommandRequest : MPCPlayerCommandRequest
{
    _Bool _value;	// 72 = 0x48
    MPModelObject *_modelObject;	// 80 = 0x50
}

- (void).cxx_destruct;	// IMP=0x00000000001ec63b
@property(readonly, nonatomic) _Bool value; // @synthesize value=_value;
@property(readonly, nonatomic) MPModelObject *modelObject; // @synthesize modelObject=_modelObject;
- (id)initWithModelObject:(id)arg1 value:(_Bool)arg2 controller:(id)arg3 label:(id)arg4;	// IMP=0x00000000001ec552

@end

