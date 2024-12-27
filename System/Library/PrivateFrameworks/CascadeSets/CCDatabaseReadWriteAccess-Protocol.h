//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <CascadeSets/CCDatabaseReadOnlyAccess-Protocol.h>

@class CCDatabaseCommand;

@protocol CCDatabaseReadWriteAccess <CCDatabaseReadOnlyAccess>
- (int)rowsModified:(id *)arg1;
- (_Bool)executeCommand:(CCDatabaseCommand *)arg1 error:(id *)arg2 returningRow:(id *)arg3;
- (_Bool)executeCommand:(CCDatabaseCommand *)arg1 error:(id *)arg2;
@end

