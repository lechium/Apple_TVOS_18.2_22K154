//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSArray, NSMapTable;

@interface PBOverlayLayoutElementChangeSet : NSObject
{
    NSArray *_updatedElements;	// 8 = 0x8
    NSMapTable *_controllerMapping;	// 16 = 0x10
}

+ (id)emptyChangeSet;	// IMP=0x0040000000143ed5
- (void).cxx_destruct;	// IMP=0x002000000014456d
@property(readonly, nonatomic) NSMapTable *controllerMapping; // @synthesize controllerMapping=_controllerMapping;
@property(readonly, copy, nonatomic) NSArray *updatedElements; // @synthesize updatedElements=_updatedElements;
- (id)elementForIdentifier:(id)arg1;	// IMP=0x001000000014445a
- (void)enumerateUpdatesUsingBlock:(CDUnknownBlockType)arg1;	// IMP=0x001000000014426b
@property(readonly, nonatomic, getter=isEmpty) _Bool empty;
@property(readonly, nonatomic) unsigned long long count;
- (id)initWithUpdatedElements:(id)arg1;	// IMP=0x0010000000143f6e

@end

