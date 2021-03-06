/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, November 11, 2020 at 12:47:01 PM Eastern Standard Time
                       * Operating System: Version 14.2 (Build 18B92)
                       * Image Source: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@protocol EFHelper <NSObject>
@required
-(int)columnNumber;
-(unsigned long long)resolveName:(id)arg1;
-(int)rowNumber;
-(unsigned long long)resolveSheet:(id)arg1;
-(unsigned long long)resolveFirstSheet:(id)arg1 lastSheet:(id)arg2;
-(unsigned long long)resolveFile:(id)arg1;
-(id)resolveTable:(id)arg1;
-(unsigned long long)resolveTableToSheetId:(id)arg1;
-(unsigned long long)resolveTableColumn:(id)arg1 columnName:(id)arg2;
-(BOOL)isCurrentSheet:(id)arg1;
-(int)resolveFunctionName:(id)arg1;

@end

