/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, November 11, 2020 at 12:45:57 PM Eastern Standard Time
                       * Operating System: Version 14.2 (Build 18B92)
                       * Image Source: /System/Library/PrivateFrameworks/ClassroomKit.framework/ClassroomKit
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <Catalyst/CATOperation.h>

@class NSString;

@interface CRKFetchChaptersOperation : CATOperation {

	NSString* mPath;
	NSString* mIdentifierType;
	NSString* mIdentifier;

}
-(BOOL)isAsynchronous;
-(id)initWithBook:(id)arg1 ;
-(void)main;
-(id)initWithRequest:(id)arg1 error:(id*)arg2 ;
-(id)initWithBookPath:(id)arg1 identifierType:(id)arg2 identifier:(id)arg3 ;
-(void)parseOPFFilePathOperationDidFinish:(id)arg1 ;
-(void)parseOFPPackageContentsOperationDidFinish:(id)arg1 ;
-(void)parseTableOfContentsOperationDidFinish:(id)arg1 ;
@end
