#ifndef __ASM_R8A7790_H__
#define __ASM_R8A7790_H__

/* DMA slave IDs */
enum {
	RCAR_DMA_SLAVE_INVALID,
	AUDIO_DMAC_SLAVE_SSI0_TX,
	AUDIO_DMAC_SLAVE_SSI0_RX,
	AUDIO_DMAC_SLAVE_SSI1_TX,
	AUDIO_DMAC_SLAVE_SSI1_RX,
	AUDIO_DMAC_SLAVE_SSI2_TX,
	AUDIO_DMAC_SLAVE_SSI2_RX,
	AUDIO_DMAC_SLAVE_SSI3_TX,
	AUDIO_DMAC_SLAVE_SSI3_RX,
	AUDIO_DMAC_SLAVE_SSI4_TX,
	AUDIO_DMAC_SLAVE_SSI4_RX,
	AUDIO_DMAC_SLAVE_SSI5_TX,
	AUDIO_DMAC_SLAVE_SSI5_RX,
	AUDIO_DMAC_SLAVE_SSI6_TX,
	AUDIO_DMAC_SLAVE_SSI6_RX,
	AUDIO_DMAC_SLAVE_SSI7_TX,
	AUDIO_DMAC_SLAVE_SSI7_RX,
	AUDIO_DMAC_SLAVE_SSI8_TX,
	AUDIO_DMAC_SLAVE_SSI8_RX,
	AUDIO_DMAC_SLAVE_SSI9_TX,
	AUDIO_DMAC_SLAVE_SSI9_RX,
};

void r8a7790_add_standard_devices(void);
void r8a7790_clock_init(void);
void r8a7790_pinmux_init(void);
void r8a7790_pm_init(void);
extern struct smp_operations r8a7790_smp_ops;

#endif /* __ASM_R8A7790_H__ */
