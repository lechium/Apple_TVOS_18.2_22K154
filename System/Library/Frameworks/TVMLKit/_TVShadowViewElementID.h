//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class IKViewElement, NSString;

__attribute__((visibility("hidden")))
@interface _TVShadowViewElementID : NSObject
{
    IKViewElement *_viewElement;	// 8 = 0x8
    NSString *_itemID;	// 16 = 0x10
}

- (void).cxx_destruct;	// IMP=0x00000000000d90a9
@property(readonly, copy, nonatomic) NSString *itemID; // @synthesize itemID=_itemID;
@property(readonly, nonatomic) IKViewElement *viewElement; // @synthesize viewElement=_viewElement;
- (id)description;	// IMP=0x00000000000d9018
- (_Bool)isEqual:(id)arg1;	// IMP=0x00000000000d8ef5
- (unsigned long long)hash;	// IMP=0x00000000000d8e60
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x00000000000d8e55
- (id)init;	// IMP=0x00000000000d8e2a
- (id)initWithViewElement:(id)arg1;	// IMP=0x00000000000d8cb7

@end

