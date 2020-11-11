/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, November 11, 2020 at 12:44:34 PM Eastern Standard Time
                       * Operating System: Version 14.2 (Build 18B92)
                       * Image Source: /System/Library/PrivateFrameworks/WorkflowKit.framework/WorkflowKit
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <libobjc.A.dylib/NSSecureCoding.h>

@interface WFDialogResponse : NSObject <NSSecureCoding> {

	long long _responseCode;

}

@property (getter=isCancelled,nonatomic,readonly) BOOL cancelled; 
@property (nonatomic,readonly) long long responseCode;                         //@synthesize responseCode=_responseCode - In the implementation block
+(BOOL)supportsSecureCoding;
-(BOOL)isCancelled;
-(void)encodeWithCoder:(id)arg1 ;
-(id)description;
-(id)initWithCoder:(id)arg1 ;
-(long long)responseCode;
-(id)initWithResponseCode:(long long)arg1 ;
-(id)initWithCancelled:(BOOL)arg1 ;
-(BOOL)shouldDismissDialogInTransientMode;
@end
