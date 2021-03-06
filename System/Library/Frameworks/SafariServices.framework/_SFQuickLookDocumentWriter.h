/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, November 11, 2020 at 12:40:02 PM Eastern Standard Time
                       * Operating System: Version 14.2 (Build 18B92)
                       * Image Source: /System/Library/Frameworks/SafariServices.framework/SafariServices
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@protocol OS_dispatch_queue;
@class NSObject, NSString, _SFQuickLookDocument;

@interface _SFQuickLookDocumentWriter : NSObject {

	NSObject*<OS_dispatch_queue> _dispatchQueue;
	NSString* _filePathAccessedOnDispatchQueue;
	BOOL _hasFinishedWriting;
	_SFQuickLookDocument* _quickLookDocument;

}

@property (nonatomic,copy) NSString * filePathAccessedOnDispatchQueue; 
@property (nonatomic,readonly) _SFQuickLookDocument * quickLookDocument;              //@synthesize quickLookDocument=_quickLookDocument - In the implementation block
@property (nonatomic,readonly) BOOL hasFinishedWriting;                               //@synthesize hasFinishedWriting=_hasFinishedWriting - In the implementation block
-(_SFQuickLookDocument *)quickLookDocument;
-(void)setFilePathAccessedOnDispatchQueue:(NSString *)arg1 ;
-(BOOL)hasFinishedWriting;
-(NSString *)filePathAccessedOnDispatchQueue;
-(id)initWithFileName:(id)arg1 uti:(id)arg2 ;
-(void)writeDataAndClose:(id)arg1 completionHandler:(/*^block*/id)arg2 ;
@end

