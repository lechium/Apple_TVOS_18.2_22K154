//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

__attribute__((visibility("hidden")))
@interface ICEResultQuery : NSObject
{
    unsigned int callID;	// 8 = 0x8
    struct tagCONNRESULT *result;	// 16 = 0x10
    _Bool isQueryAnswered;	// 24 = 0x18
}

@property _Bool isQueryAnswered; // @synthesize isQueryAnswered;
@property unsigned int callID; // @synthesize callID;
- (void)dealloc;	// IMP=0x000000000006b752
@property struct tagCONNRESULT *result;
- (id)initWithCallID:(unsigned int)arg1;	// IMP=0x000000000006b697
- (id)initWithResult:(struct tagCONNRESULT *)arg1;	// IMP=0x000000000006b603

@end

