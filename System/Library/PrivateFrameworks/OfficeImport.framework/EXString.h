/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, November 11, 2020 at 12:47:01 PM Eastern Standard Time
                       * Operating System: Version 14.2 (Build 18B92)
                       * Image Source: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


#import <OfficeImport/OfficeImport-Structs.h>
@interface EXString : NSObject
+(id)readStringWithAsciiCodeFromXmlStringElement:(xmlNode*)arg1 ;
+(void)buildEDString:(id)arg1 fromNode:(xmlNode*)arg2 edFont:(id)arg3 keepWhitespace:(BOOL)arg4 state:(id)arg5 ;
+(void)parseStringWithAsciiCode:(id)arg1 ;
+(id)edTextFromXmlStringElement:(xmlNode*)arg1 state:(id)arg2 ;
+(id)edStringWithRunsFromXmlStringElement:(xmlNode*)arg1 state:(id)arg2 ;
+(id)edStringWithRunsFromXmlDivElement:(xmlNode*)arg1 state:(id)arg2 ;
+(void)replaceEscapeAsciiCodes:(id)arg1 ;
+(void)buildEDString:(id)arg1 fromText:(id)arg2 edFont:(id)arg3 keepWhitespace:(BOOL)arg4 state:(id)arg5 ;
+(void)buildEDString:(id)arg1 fromChildrenOfNode:(xmlNode*)arg2 edFont:(id)arg3 keepWhitespace:(BOOL)arg4 state:(id)arg5 ;
+(id)cleanupWhitespace:(id)arg1 ;
+(id)stringInEDString:(id)arg1 start:(unsigned long long)arg2 end:(unsigned long long)arg3 ;
+(id)stringInEDString:(id)arg1 forRunIndex:(unsigned)arg2 ;
@end
