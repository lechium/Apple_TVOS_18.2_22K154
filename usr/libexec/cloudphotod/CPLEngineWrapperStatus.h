//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class CPLEngineParameters, NSError;

@interface CPLEngineWrapperStatus : NSObject
{
    _Bool _opened;	// 8 = 0x8
    CPLEngineParameters *_parameters;	// 16 = 0x10
    unsigned long long _clientCount;	// 24 = 0x18
    NSError *_openError;	// 32 = 0x20
}

+ (_Bool)supportsSecureCoding;	// IMP=0x0020000000025aac
- (void).cxx_destruct;	// IMP=0x0020000000025cbe
@property(readonly, nonatomic) NSError *openError; // @synthesize openError=_openError;
@property(readonly, nonatomic, getter=isOpened) _Bool opened; // @synthesize opened=_opened;
@property(readonly, nonatomic) unsigned long long clientCount; // @synthesize clientCount=_clientCount;
@property(readonly, nonatomic) CPLEngineParameters *parameters; // @synthesize parameters=_parameters;
- (id)initWithCoder:(id)arg1;	// IMP=0x0010000000025b76
- (void)encodeWithCoder:(id)arg1;	// IMP=0x0010000000025ab4
- (id)initWithParameters:(id)arg1 clientCount:(unsigned long long)arg2 isOpened:(_Bool)arg3 openError:(id)arg4;	// IMP=0x00100000000259f1
- (id)initWithWrapper:(id)arg1 clientCount:(unsigned long long)arg2 isOpened:(_Bool)arg3 openError:(id)arg4;	// IMP=0x0010000000015b00

@end

