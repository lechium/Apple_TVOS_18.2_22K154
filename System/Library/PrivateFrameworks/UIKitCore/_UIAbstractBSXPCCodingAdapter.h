//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSString;

__attribute__((visibility("hidden")))
@interface _UIAbstractBSXPCCodingAdapter : NSObject
{
    id _object;	// 8 = 0x8
}

+ (_Bool)supportsBSXPCSecureCoding;	// IMP=0x0010000000ef7628
+ (id)adapterWithObject:(id)arg1;	// IMP=0x0010000000ef7574
- (void).cxx_destruct;	// IMP=0x0000000000ef7795
@property(readonly, nonatomic) id object; // @synthesize object=_object;
- (id)initWithBSXPCCoder:(id)arg1 collectionOfClass:(Class)arg2 containingClass:(Class)arg3;	// IMP=0x0000000000ef76f3
- (id)initWithBSXPCCoder:(id)arg1 clazz:(Class)arg2;	// IMP=0x0000000000ef7667
- (id)initWithBSXPCCoder:(id)arg1;	// IMP=0x0000000000ef7653
- (void)encodeWithBSXPCCoder:(id)arg1;	// IMP=0x0000000000ef7630
- (id)initWithObject:(id)arg1;	// IMP=0x0000000000ef75bd

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

