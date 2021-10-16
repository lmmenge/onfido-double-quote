//
//  OnfidoBlurDetectionResult.h
//  Onfido
//
//  Created by Anurag Ajwani on 16/03/2021.
//

#ifndef OnfidoBlurDetectionResult_h
#define OnfidoBlurDetectionResult_h

#import <Foundation/Foundation.h>

@interface OnfidoBlurDetectionResult : NSObject

@property (nonatomic, assign, readonly) BOOL hasBlur;
@property (nonatomic, assign, readonly) double blurScore;
@property (nonatomic, assign, readonly) double threshold;

- (instancetype) initWithHasBlur: (BOOL) hasBlur
                    andBlurScore: (double) blurScore
                    andThreshold: (double) threshold;

@end

#endif /* OnfidoBlurDetectionResult_h */
