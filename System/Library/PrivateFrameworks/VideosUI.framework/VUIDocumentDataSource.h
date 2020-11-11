/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, November 11, 2020 at 12:41:39 PM Eastern Standard Time
                       * Operating System: Version 14.2 (Build 18B92)
                       * Image Source: /System/Library/PrivateFrameworks/VideosUI.framework/VideosUI
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@class NSString, VUIDocumentContextData, VUIDocumentPreFetchedData, VUIDocumentUIConfiguration;

@interface VUIDocumentDataSource : NSObject {

	BOOL _shouldLoadPageImmediately;
	NSString* _documentRef;
	NSString* _documentType;
	NSString* _controllerRef;
	VUIDocumentContextData* _contextData;
	VUIDocumentPreFetchedData* _prefetchData;
	VUIDocumentUIConfiguration* _uiConfiguration;

}

@property (nonatomic,retain) NSString * documentRef;                                    //@synthesize documentRef=_documentRef - In the implementation block
@property (nonatomic,retain) NSString * documentType;                                   //@synthesize documentType=_documentType - In the implementation block
@property (nonatomic,retain) NSString * controllerRef;                                  //@synthesize controllerRef=_controllerRef - In the implementation block
@property (nonatomic,retain) VUIDocumentContextData * contextData;                      //@synthesize contextData=_contextData - In the implementation block
@property (nonatomic,retain) VUIDocumentPreFetchedData * prefetchData;                  //@synthesize prefetchData=_prefetchData - In the implementation block
@property (nonatomic,retain) VUIDocumentUIConfiguration * uiConfiguration;              //@synthesize uiConfiguration=_uiConfiguration - In the implementation block
@property (assign,nonatomic) BOOL shouldLoadPageImmediately;                            //@synthesize shouldLoadPageImmediately=_shouldLoadPageImmediately - In the implementation block
+(id)documentDataSourceWithDictionary:(id)arg1 ;
+(BOOL)isCanonicalDocumentRef:(id)arg1 ;
-(id)jsonData;
-(NSString *)documentType;
-(void)setDocumentType:(NSString *)arg1 ;
-(void)setContextData:(VUIDocumentContextData *)arg1 ;
-(VUIDocumentContextData *)contextData;
-(VUIDocumentPreFetchedData *)prefetchData;
-(VUIDocumentUIConfiguration *)uiConfiguration;
-(id)initWithDocumentRef:(id)arg1 ;
-(id)initWithDataSourceDict:(id)arg1 ;
-(void)setDocumentRef:(NSString *)arg1 ;
-(NSString *)documentRef;
-(NSString *)controllerRef;
-(void)setControllerRef:(NSString *)arg1 ;
-(void)setPrefetchData:(VUIDocumentPreFetchedData *)arg1 ;
-(void)setUiConfiguration:(VUIDocumentUIConfiguration *)arg1 ;
-(BOOL)shouldLoadPageImmediately;
-(void)setShouldLoadPageImmediately:(BOOL)arg1 ;
@end
