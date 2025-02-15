//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@interface CLAutoCohortUtilities : NSObject
{
}

+ (id)computeAutoCohortMapWithStarterGraph:(id)arg1;	// IMP=0x0080000000018865
+ (_Bool)isEdgeKnownToCauseCycle:(id)arg1;	// IMP=0x0080000000018597
+ (void)markUnvettedUnsafe;	// IMP=0x0080000000018577
+ (void)markUnvettedSafe;	// IMP=0x0080000000018557
+ (void)markUnvetted:(id)arg1;	// IMP=0x00800000000182c1
+ (void)persistEdgeFrom:(id)arg1 to:(id)arg2;	// IMP=0x0080000000018241
+ (void)writeEdge:(id)arg1 toDirectory:(id)arg2;	// IMP=0x00800000000180a9
+ (id)getUnsafeEdges;	// IMP=0x0080000000018066
+ (id)getSafeEdges;	// IMP=0x0080000000018023
+ (id)getUnvettedEdges;	// IMP=0x0080000000018003
+ (id)readEdges:(id)arg1;	// IMP=0x0080000000017db0
+ (id)getEdgeFilesFromDirectory:(id)arg1;	// IMP=0x0080000000017aaa
+ (void)createDirectoryAtPath:(id)arg1;	// IMP=0x0080000000017797
+ (void)applyEdges:(id)arg1 toGraph:(id)arg2;	// IMP=0x0080000000017325
+ (id)layerAssignmentForNode:(id)arg1 inGraph:(id)arg2 extendingLayering:(id)arg3;	// IMP=0x008000000001706d
+ (_Bool)autoCohortingEnabled;	// IMP=0x008000000001705c
+ (void)enableAutoCohortingForProcessAtPath:(id)arg1;	// IMP=0x0080000000016c2c

@end

