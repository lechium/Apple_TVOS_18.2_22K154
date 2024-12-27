//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@interface ADLocationFetchRequest : NSObject
{
    double _desiredAccuracy;	// 8 = 0x8
    unsigned long long _style;	// 16 = 0x10
    CDUnknownBlockType _completion;	// 24 = 0x18
}

- (void).cxx_destruct;	// IMP=0x00200000001ad8f7
@property(copy, nonatomic) CDUnknownBlockType completion; // @synthesize completion=_completion;
@property(nonatomic) unsigned long long style; // @synthesize style=_style;
@property(nonatomic) double desiredAccuracy; // @synthesize desiredAccuracy=_desiredAccuracy;
- (id)initWithClientFetchRequest:(id)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x00100000001ad7fc

@end

