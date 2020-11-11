/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, November 11, 2020 at 12:47:29 PM Eastern Standard Time
                       * Operating System: Version 14.2 (Build 18B92)
                       * Image Source: /System/Library/PrivateFrameworks/ScreenshotServices.framework/ScreenshotServices
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <ScreenshotServices/ScreenshotServices-Structs.h>
#import <libobjc.A.dylib/BSXPCCoding.h>
#import <libobjc.A.dylib/SSLoggable.h>

@class NSData, NSString;

@interface SSHarvestedApplicationDocument : NSObject <BSXPCCoding, SSLoggable> {

	NSData* _PDFData;
	long long _PDFPage;
	CGRect _PDFVisibleRect;

}

@property (nonatomic,copy) NSData * PDFData;                                //@synthesize PDFData=_PDFData - In the implementation block
@property (assign,nonatomic) long long PDFPage;                             //@synthesize PDFPage=_PDFPage - In the implementation block
@property (assign,nonatomic) CGRect PDFVisibleRect;                         //@synthesize PDFVisibleRect=_PDFVisibleRect - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,readonly) NSString * loggableDescription; 
-(id)initWithXPCDictionary:(id)arg1 ;
-(void)encodeWithXPCDictionary:(id)arg1 ;
-(long long)PDFPage;
-(NSData *)PDFData;
-(NSString *)loggableDescription;
-(void)setPDFPage:(long long)arg1 ;
-(void)setPDFData:(NSData *)arg1 ;
-(void)setPDFVisibleRect:(CGRect)arg1 ;
-(CGRect)PDFVisibleRect;
@end
