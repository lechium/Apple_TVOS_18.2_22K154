//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class NSString;

__attribute__((visibility("hidden")))
@interface _UIDebugIssueReportFormatter
{
    NSString *_header;	// 8 = 0x8
    NSString *_footer;	// 16 = 0x10
    NSString *_noIssuesDescription;	// 24 = 0x18
    NSString *_defaultIssuePrefix;	// 32 = 0x20
}

- (void).cxx_destruct;	// IMP=0x00000000009426ed
@property(copy, nonatomic) NSString *defaultIssuePrefix; // @synthesize defaultIssuePrefix=_defaultIssuePrefix;
@property(copy, nonatomic) NSString *noIssuesDescription; // @synthesize noIssuesDescription=_noIssuesDescription;
@property(copy, nonatomic) NSString *footer; // @synthesize footer=_footer;
@property(copy, nonatomic) NSString *header; // @synthesize header=_header;
- (id)stringFromReport:(id)arg1;	// IMP=0x0000000000942617
- (id)_componentsFromReport:(id)arg1;	// IMP=0x00000000009420ea
- (id)init;	// IMP=0x0000000000942028

@end

