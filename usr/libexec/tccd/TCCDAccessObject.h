//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class TCCDAccessIndirectObject, TCCDService;

@interface TCCDAccessObject : NSObject
{
    TCCDService *_serviceObject;	// 8 = 0x8
    TCCDAccessIndirectObject *_indirectObject;	// 16 = 0x10
}

- (void).cxx_destruct;	// IMP=0x00200000000205c7
@property(retain) TCCDAccessIndirectObject *indirectObject; // @synthesize indirectObject=_indirectObject;
@property(retain) TCCDService *serviceObject; // @synthesize serviceObject=_serviceObject;
- (id)description;	// IMP=0x0010000000020426
- (id)initWithService:(id)arg1 indirectObject:(id)arg2;	// IMP=0x0010000000020388

@end

