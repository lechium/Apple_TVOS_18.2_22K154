//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@interface CLKFRunningEstimates : NSObject
{
    float _F01;	// 8 = 0x8
    CMVector_b5e1af32 _fState;	// 12 = 0xc
    CMVector_b5e1af32 _fQ;	// 20 = 0x14
    CMMatrix_7b975238 _fH;	// 28 = 0x1c
    CMFactoredMatrix_1e361cdb _fP;	// 36 = 0x24
}

- (id).cxx_construct;	// IMP=0x002000000048d50c
@property(nonatomic) float F01; // @synthesize F01=_F01;
@property(nonatomic) CMMatrix_7b975238 fH; // @synthesize fH=_fH;
@property(nonatomic) CMVector_b5e1af32 fQ; // @synthesize fQ=_fQ;
@property(nonatomic) CMFactoredMatrix_1e361cdb fP; // @synthesize fP=_fP;
@property(nonatomic) CMVector_b5e1af32 fState; // @synthesize fState=_fState;
- (id)init;	// IMP=0x001000000048d42e

@end

