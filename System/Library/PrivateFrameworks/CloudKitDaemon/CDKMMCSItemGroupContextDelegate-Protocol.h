//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class CKDMMCSItemGroupContext, CKFileMetadata, NSError;
@protocol CKDMMCSItemReaderWriterProtocol;

@protocol CDKMMCSItemGroupContextDelegate
- (_Bool)itemGroupContext:(CKDMMCSItemGroupContext *)arg1 didReadFromItemReaderWriter:(id <CKDMMCSItemReaderWriterProtocol>)arg2 offset:(unsigned long long)arg3 bytes:(char *)arg4 length:(unsigned long long)arg5 bytesRead:(unsigned long long *)arg6 error:(id *)arg7;
- (_Bool)itemGroupContext:(CKDMMCSItemGroupContext *)arg1 willReadFromItemReaderWriter:(id <CKDMMCSItemReaderWriterProtocol>)arg2 offset:(unsigned long long)arg3 bytes:(char *)arg4 length:(unsigned long long)arg5 bytesRead:(unsigned long long *)arg6 error:(id *)arg7;
- (CKFileMetadata *)itemGroupContext:(CKDMMCSItemGroupContext *)arg1 didGetFileMetadataItemReaderWriter:(id <CKDMMCSItemReaderWriterProtocol>)arg2 fileMetadata:(CKFileMetadata *)arg3 error:(NSError *)arg4;
- (_Bool)itemGroupContext:(CKDMMCSItemGroupContext *)arg1 willGetFileMetadataItemReaderWriter:(id <CKDMMCSItemReaderWriterProtocol>)arg2 error:(id *)arg3;
- (void)itemGroupContext:(CKDMMCSItemGroupContext *)arg1 didCloseItemReaderWriter:(id <CKDMMCSItemReaderWriterProtocol>)arg2 result:(_Bool)arg3 error:(NSError *)arg4;
- (_Bool)itemGroupContext:(CKDMMCSItemGroupContext *)arg1 willCloseItemReaderWriter:(id <CKDMMCSItemReaderWriterProtocol>)arg2 error:(id *)arg3;
- (void)itemGroupContext:(CKDMMCSItemGroupContext *)arg1 didOpenItemReaderWriter:(id <CKDMMCSItemReaderWriterProtocol>)arg2 result:(_Bool)arg3 error:(NSError *)arg4;
- (_Bool)itemGroupContext:(CKDMMCSItemGroupContext *)arg1 willOpenItemReaderWriter:(id <CKDMMCSItemReaderWriterProtocol>)arg2 error:(id *)arg3;
- (id <CKDMMCSItemReaderWriterProtocol>)itemGroupContext:(CKDMMCSItemGroupContext *)arg1 didGetItemReader:(id <CKDMMCSItemReaderWriterProtocol>)arg2 itemID:(unsigned long long)arg3;
- (_Bool)itemGroupContext:(CKDMMCSItemGroupContext *)arg1 willGetMMCSItemReaderForItemID:(unsigned long long)arg2;
@end

