//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <BiomeFoundation/NSObject-Protocol.h>

@class BMResourceContainer, BMResourceSpecifier;

@protocol BMAccessDelegate <NSObject>
- (_Bool)teardownResource:(BMResourceSpecifier *)arg1 inContainer:(BMResourceContainer *)arg2;
- (_Bool)prepareResource:(BMResourceSpecifier *)arg1 withMode:(unsigned long long)arg2 inContainer:(BMResourceContainer *)arg3;
- (_Bool)handlesDirectoryRemovalForResource:(BMResourceSpecifier *)arg1 inContainer:(BMResourceContainer *)arg2;
- (_Bool)handlesDirectoryCreationForResource:(BMResourceSpecifier *)arg1 inContainer:(BMResourceContainer *)arg2;
@end

