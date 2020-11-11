/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, November 11, 2020 at 12:44:14 PM Eastern Standard Time
                       * Operating System: Version 14.2 (Build 18B92)
                       * Image Source: /System/Library/PrivateFrameworks/AppleCVAPhoto.framework/AppleCVAPhoto
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <libobjc.A.dylib/CVABackgroundRequest.h>

@class CVAMattingRequest, NSString;

@interface CVABackgroundRequestImplBase : NSObject <CVABackgroundRequest> {

	CVAMattingRequest* _mattingRequest;

}

@property (retain) CVAMattingRequest * mattingRequest;              //@synthesize mattingRequest=_mattingRequest - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(CVAMattingRequest *)mattingRequest;
-(void)setMattingRequest:(CVAMattingRequest *)arg1 ;
@end
