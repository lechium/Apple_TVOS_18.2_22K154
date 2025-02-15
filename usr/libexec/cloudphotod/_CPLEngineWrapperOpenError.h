//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class CPLEngineParameters, NSDate, NSError;

@interface _CPLEngineWrapperOpenError : NSObject
{
    CPLEngineParameters *_parameters;	// 8 = 0x8
    NSError *_openError;	// 16 = 0x10
    NSDate *_errorDate;	// 24 = 0x18
}

- (void).cxx_destruct;	// IMP=0x0020000000015d1a
@property(readonly, nonatomic) NSDate *errorDate; // @synthesize errorDate=_errorDate;
@property(readonly, nonatomic) NSError *openError; // @synthesize openError=_openError;
@property(readonly, nonatomic) CPLEngineParameters *parameters; // @synthesize parameters=_parameters;
@property(readonly, nonatomic) _Bool shouldTryReopening;
@property(readonly, nonatomic) _Bool shouldTryReopeningWithoutLibrary;
- (id)initWithParameters:(id)arg1 openError:(id)arg2;	// IMP=0x0010000000015b86

@end

